using AxMmPlugin;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Http;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.StaticFiles;
using System.Text.RegularExpressions;

namespace AuSmsWeb.Controllers
{
  [ApiController]
  [Route("api/[controller]")]
  public class MessageDBController: ControllerBase
  {
    private const int CLEANUP_INTERVAL_SECS = 3600;
    private const int CLEANUP_MAX_AGE_SECS = 86400;

    private AXMMCFGLib.MessageDB m_oMessageDB = new AXMMCFGLib.MessageDB();
    private AXMMCFGLib.Constants m_oConstants = new AXMMCFGLib.Constants();

    private static string m_sTempDir = "";
    private static Stopwatch m_oTempDirCleanupTime = new Stopwatch();
    private static CLog oLog = new CLog(); // log to C:\AxDebug\plugin.log

    private Type GetMessageValue<Type>(AXMMCFGLib.Message oMessage, string sValue)
    {
      var oValue = oMessage.GetValue(sValue);
      if (oValue && oValue != System.DBNull.Value)
        return oValue;
      else 
        return default(Type);
    }

    private bool IsEmail(string sAddress)
    {
      return sAddress.Contains("@");
    }

    private string GetTempDir()
    {
      if (m_sTempDir != "") return m_sTempDir;
      
      // check if tempdir exists; create otherwise; templdir is used for caching attachments
      m_sTempDir = Path.Combine(new string[] { Path.GetTempPath(), "MessageDBController" });
      try
      {
        // it's possible these operations may fail (preview may still be open)  
        // that's OK we'll try again next time..
        if (!Directory.Exists(m_sTempDir))
          Directory.CreateDirectory(m_sTempDir);      
      }
      catch (Exception e)
      {
        // just ignore; we'll try again next time..
        oLog.Log($"AuSMSWeb: Create temp directory: [{m_sTempDir}] error: [{e.Message}]");
      }

      return m_sTempDir;
    }

    [HttpPost("create")]
    public IActionResult Create([FromForm] CreateMessageFormData oAuMessage)
    {
      ResultCode rc = new ResultCode();
      string sTypeID = IsEmail(oAuMessage.txtToAddress) ? m_oConstants.MESSAGETYPE_EMAIL : m_oConstants.MESSAGETYPE_SMS;

      AXMMCFGLib.Message oMessage = m_oMessageDB.Create(sTypeID, m_oConstants.FLAG_CREATE_GENERICMESSAGE);

      oMessage.SetValue("ToAddress", oAuMessage.txtToAddress);
      if (sTypeID == m_oConstants.MESSAGETYPE_SMS)
      {
        oMessage.SetValue("Body", oAuMessage.txtBody);
      }
      else if (sTypeID == m_oConstants.MESSAGETYPE_EMAIL)
      {
        oMessage.SetValue("BodyPlainText", oAuMessage.txtBody);
      }

      if (oAuMessage.btnAttachments != null)
      {
        try
        {
          string sTempDir = GetTempDir();
          foreach (var oFile in oAuMessage.btnAttachments)
          {
            if (oFile.Length == 0) continue; // weird .. 
            string sFileName = oFile.FileName;
            string sFilePath = Path.Combine(sTempDir, oFile.FileName);
            using (Stream oFileStream = new FileStream(sFilePath, FileMode.Create))
              oFile.CopyTo(oFileStream);
            oMessage.AddAttachment(sFilePath);
            System.IO.File.Delete(sFilePath);
            if (oMessage.LastError != 0)
            {
              rc.LastError = oMessage.LastError;
              rc.LastErrorDescription = m_oMessageDB.GetErrorDescription(rc.LastError);
              return BadRequest(rc);
            }
          }
        }
        catch (Exception e)
        {
          rc.LastError = 1;
          rc.LastErrorDescription = e.Message;
          return BadRequest(rc);
        }
      }

      oMessage.AddTrace("Create from web app");
      m_oMessageDB.Save(oMessage);
      if (m_oMessageDB.LastError != 0)
      {
        rc.LastError = m_oMessageDB.LastError;
        rc.LastErrorDescription = m_oMessageDB.GetErrorDescription(rc.LastError);
      } else  
        m_oMessageDB.NotifyStatusUpdate();

      return Ok(rc);
    }

    [HttpGet("attachment")]
    public IActionResult Attachment(int MessageID, int AttachmentID, string FileName)
    {
      string sCachePath = GetCachePath(AttachmentID, FileName);
      
      if (!System.IO.File.Exists(sCachePath))
      { // must have already been cleaned up; let's get it again.
        AXMMCFGLib.Message oMessage = m_oMessageDB.Load(MessageID, m_oConstants.FLAG_LOAD_READ_UNCOMMITTED | m_oConstants.FLAG_LOAD_GENERICMESSAGE);
        if (m_oMessageDB.LastError != 0)
          return new BadRequestResult();
        
        if (!CacheAttachments(oMessage))
          return new StatusCodeResult(StatusCodes.Status500InternalServerError);
      }

      string sContentType = "";
      new FileExtensionContentTypeProvider().TryGetContentType(FileName, out sContentType);
      if (sContentType == null) sContentType = "application/octet-stream";
      return PhysicalFile(sCachePath, sContentType, FileName, false);
    }

    [HttpGet("load")]
    public IEnumerable<AuMessage> Load(int? Top, string FilterAddress, int? AfterID, int? BeforeID)
    {      
      List<AuMessage> lstMessages = new List<AuMessage>();

      string sOrder = "ID DESC";
      string sFilter = ""; // be at least somewhat critical of the filter as this may be abused by 3rd parties
      string sFilterAddress = FilterAddress ?? "";
      int nBeforeId = BeforeID ?? 0;
      int nAfterId = AfterID ?? 0;
      int nTop = Top ?? 0;

      if (nTop == 0) nTop = 10;
      if (nTop > 100) nTop = 100;

      AXMMCFGLib.Message oMessage = null;

      if (sFilterAddress == "")
      {        
        sFilter = $"(TypeID = '{m_oConstants.MESSAGETYPE_SMS}' OR TypeID = '{m_oConstants.MESSAGETYPE_EMAIL}')";
        
        // completely normal and non-psychopathic way of joining to filter out delivery reports... nothing to see here...
        sFilter += " AND (SELECT COUNT(MessageID) FROM Messages_Sms WITH(NOLOCK) WHERE MessageID = ID AND IsDeliveryReport <> 0) = 0";

        if (nBeforeId > 0)
          sFilter += $" AND ID < {BeforeID}";
        else if (nAfterId > 0)
          sFilter += $" AND ID > {AfterID}";

        oMessage = m_oMessageDB.FindFirstMessage("", sFilter, sOrder, nTop,
          m_oConstants.FLAG_FINDFIRST_READ_UNCOMMITTED | m_oConstants.FLAG_FINDFIRST_GENERICMESSAGE);
      }
      else
      { // copious braces so we don't get bit by the operator precedence bug
        string sType = IsEmail(sFilterAddress) ? m_oConstants.MESSAGETYPE_EMAIL : m_oConstants.MESSAGETYPE_SMS;

        if (sType == m_oConstants.MESSAGETYPE_EMAIL)
        {
          sFilter = $"((DirectionID = '{CMmConstants.MESSAGE_DIRECTIONID_IN}' AND FromAddress = '{sFilterAddress.Replace("'", "''")}')" +
            $" OR (DirectionID = '{CMmConstants.MESSAGE_DIRECTIONID_OUT}' AND ToAddress = '{sFilterAddress.Replace("'", "''")}'))";
        } else
        {
          string sAddress = sFilterAddress.Replace("'", "''");
          if (sAddress.StartsWith("+"))
            sAddress = sAddress.Remove(0, 1);
          else if (sAddress.StartsWith("00"))
            sAddress = sAddress.Remove(0, 2);

          sFilter = $"((DirectionID = '{CMmConstants.MESSAGE_DIRECTIONID_IN}' AND FromAddress LIKE '%{sAddress}')" +
            $" OR (DirectionID = '{CMmConstants.MESSAGE_DIRECTIONID_OUT}' AND ToAddress LIKE '%{sAddress}'))";
        }

        if (nBeforeId > 0)
          sFilter += $" AND ID < {BeforeID}";
        else if (nAfterId > 0)
          sFilter += $" AND ID > {AfterID}";

        oMessage = m_oMessageDB.FindFirstMessage(sType, sFilter, sOrder, nTop,
          m_oConstants.FLAG_FINDFIRST_READ_UNCOMMITTED | m_oConstants.FLAG_FINDFIRST_GENERICMESSAGE);        
      }

      while (m_oMessageDB.LastError == 0)
      {
        var oAuMessage = new AuMessage();

        oAuMessage.ID                       = oMessage.ID               ;
        oAuMessage.DirectionID              = oMessage.DirectionID      ;
        oAuMessage.TypeID                   = oMessage.TypeID           ;
        oAuMessage.StatusID                 = oMessage.StatusID         ;
        oAuMessage.StatusDetailsID          = oMessage.StatusDetailsID  ;
        oAuMessage.TriggerStatusID          = oMessage.TriggerStatusID  ;
        oAuMessage.TriggerDetailsID         = oMessage.TriggerDetailsID ;
        oAuMessage.AckStatusID              = oMessage.AckStatusID      ;
        oAuMessage.ChannelID                = oMessage.ChannelID        ;
        oAuMessage.BillingID                = oMessage.BillingID        ;
        oAuMessage.ScheduledTime            = oMessage.ScheduledTime    ;
        oAuMessage.SentTime                 = oMessage.SentTime         ;
        oAuMessage.ReceivedTime             = oMessage.ReceivedTime     ;
        oAuMessage.LastUpdate               = oMessage.LastUpdate       ;
        oAuMessage.Priority                 = oMessage.Priority         ;
        oAuMessage.BatchID                  = oMessage.BatchID          ;
        oAuMessage.ConversationID           = oMessage.ConversationID   ;
        oAuMessage.Creator                  = oMessage.Creator          ;
        oAuMessage.CustomField1             = oMessage.CustomField1     ;
        oAuMessage.CustomField2             = oMessage.CustomField2     ;
        oAuMessage.Trace                    = oMessage.Trace            ;
        oAuMessage.Retries                  = oMessage.Retries          ;

        oAuMessage.ToAddress                = oMessage.GetValueAs<string>("ToAddress"             , "");
        oAuMessage.FromAddress              = oMessage.GetValueAs<string>("FromAddress"           , "");

        if (oAuMessage.TypeID == m_oConstants.MESSAGETYPE_SMS)
        {
          oAuMessage.RequestDeliveryReport    = oMessage.GetValueAs<bool>  ("RequestDeliveryReport" );
          oAuMessage.DeliveryStatus           = oMessage.GetValueAs<string>("DeliveryStatus"        , "");
          oAuMessage.DataCoding               = oMessage.GetValueAs<int>   ("DataCoding"            );
          oAuMessage.BodyFormat               = oMessage.GetValueAs<int>   ("BodyFormat"            );
          oAuMessage.HasUdh                   = oMessage.GetValueAs<bool>  ("HasUdh"                );
          oAuMessage.TotalParts               = oMessage.GetValueAs<int>   ("TotalParts"            );
          oAuMessage.PartNumber               = oMessage.GetValueAs<int>   ("PartNumber"            );
          oAuMessage.Reference                = oMessage.GetValueAs<string>("Reference"             , "");
          oAuMessage.Body                     = oMessage.GetValueAs<string>("Body"                  , "");
        }
        else if (oAuMessage.TypeID == m_oConstants.MESSAGETYPE_EMAIL)
        {
          oAuMessage.EmailPriority            = oMessage.GetValueAs<int>   ("EmailPriority"         );
          oAuMessage.Organization             = oMessage.GetValueAs<string>("Organization"          , "");
          oAuMessage.ReadReceiptAddress       = oMessage.GetValueAs<string>("ReadReceiptAddress"    , "");
          oAuMessage.FromName                 = oMessage.GetValueAs<string>("FromName"              , "");
          oAuMessage.ReplyAddress             = oMessage.GetValueAs<string>("ReplyAddress"          , "");
          oAuMessage.Subject                  = oMessage.GetValueAs<string>("Subject"               , "");
          oAuMessage.CcAddress                = oMessage.GetValueAs<string>("CcAddress"             , "");
          oAuMessage.BccAddress               = oMessage.GetValueAs<string>("BccAddress"            , "");
          oAuMessage.BodyPlainText            = oMessage.GetValueAs<string>("BodyPlainText"         , "");
          oAuMessage.BodyHtml                 = oMessage.GetValueAs<string>("BodyHtml"              , "");
          oAuMessage.Header                   = oMessage.GetValueAs<string>("Header"                , "");

          // naive client just checks body
          if (oAuMessage.Body == null)
             oAuMessage.Body = oAuMessage.BodyPlainText;
          if (oAuMessage.Body == null)
            oAuMessage.Body = oAuMessage.BodyHtml;

          // naive client; don't show HTML if any stray HTML may still be in there.
          if (oAuMessage.Body != "")
            oAuMessage.Body = Regex.Replace(oAuMessage.Body, "<.*?>", "");
        }

        if (CacheAttachments(oMessage))
        { // don't bother linking to attachments if we've been unable to store them
          int nCnt = oMessage.CountAttachments();
          for (int i = 0; i < nCnt; i++)
          {
            var oAttachment = new AuAttachment();
            oAttachment.FileName = oMessage.GetAttachmentName(i);
            oAttachment.ID = oMessage.GetAttachmentID(i);
            
            string sMimeType = "";
            new FileExtensionContentTypeProvider().TryGetContentType(oAttachment.FileName, out sMimeType);
            oAttachment.MimeType = sMimeType;

            if (oAuMessage.Attachments == null)
              oAuMessage.Attachments = new List<AuAttachment>();
            oAuMessage.Attachments.Add(oAttachment);
          }
        }

        lstMessages.Add(oAuMessage);
      
        oMessage = m_oMessageDB.FindNextMessage();
      }
      return lstMessages;
    }

    private string GetCachePath(int nAttachmentID, string sFileName)
    {
      string sTempdir = GetTempDir();
      string sExt = Path.GetExtension(sFileName);
      return Path.Combine(new string[] { sTempdir, $"{nAttachmentID}{sExt}" });
    }

    private bool CacheAttachments(AXMMCFGLib.Message oMessage)
    {
      // cleanup attachment cache
      if (!m_oTempDirCleanupTime.IsRunning || 
        m_oTempDirCleanupTime.Elapsed.TotalSeconds > CLEANUP_INTERVAL_SECS)
      {
        string sTempdir = GetTempDir();
        string[] files = Directory.GetFiles(sTempdir);

        DateTime dtAge = DateTime.Now.AddSeconds(CLEANUP_MAX_AGE_SECS);
        foreach (string file in files)
        {
          FileInfo fi = new FileInfo(file);
          if (fi.LastWriteTime < dtAge)
          {
            try
            {
              fi.Delete();
            } catch(Exception e)
            {
              oLog.Log($"AuSMSWeb: Cleanup cached attachment: [{fi.FullName}] error: [{e.Message}]");
            }
          }            
        }

        m_oTempDirCleanupTime.Restart();
      }

      // cache attachments
      int nCnt = oMessage.CountAttachments();
      for (int i = 0; i < nCnt; i++)
      {
        int nAttachmentId = oMessage.GetAttachmentID(i);
        string sFileName = oMessage.GetAttachmentName(i);
        string sCachePath = GetCachePath(nAttachmentId, sFileName);

        if (!System.IO.File.Exists(sCachePath))
        {
          oMessage.SaveAttachment(i, sCachePath);
          if (oMessage.LastError != 0)
          {
            string sErrorDescription = m_oMessageDB.GetErrorDescription(oMessage.LastError);            
            oLog.Log($"AuSmsWeb: Save attachment to chache: [{sCachePath}] error: [{sErrorDescription}]");

            return false;
          }
        }
      }
      return true;
    }
  }
}
