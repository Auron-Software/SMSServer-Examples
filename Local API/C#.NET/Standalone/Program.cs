using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Standalone_Processing
{
  class Program
  {
    static AXMMCFGLib.Database m_objDatabase    = new AXMMCFGLib.Database();
    static AXMMCFGLib.Constants m_objConstants  = new AXMMCFGLib.Constants();

    static AXMMCFGLib.Options m_objOptions      = null;
    static AXMMCFGLib.MessageDB m_objMessageDB  = null;

    static void Main(string[] args)
    {

      string strFilter = "";
      System.Int32 nCount = 0;

      // Print Program Info
      Console.WriteLine("Auron SMS Server Version: {0}\nAuron SMS Server Build: {1}\nAuron SMS Server API Module: {2}\n", m_objDatabase.Module, m_objDatabase.Build, m_objDatabase.Module);

      // Load the Options settings from the Configuration Database
      m_objOptions = m_objDatabase.GetOptions();
      Console.WriteLine("Load Options, result: {0} ({1})", m_objDatabase.LastError, m_objDatabase.GetErrorDescription(m_objDatabase.LastError));
      if (m_objOptions.LastError != 0)
        return;

      // Check if Standalone Processing is enabled in the configuration database
      if (!m_objOptions.StandaloneProcessing)
      {
        Console.WriteLine("Error: Standalone Processing is disabled. Enable it first in the Manager.");
        Console.WriteLine("Select 'Options' from the 'Configuration' menu and enable Standalone Processing.");
        return;
      }

      // Open the Message Database
      m_objMessageDB = m_objDatabase.GetMessageDB();
      Console.WriteLine("Get, result: {0} ({1})", m_objDatabase.LastError, m_objDatabase.GetErrorDescription(m_objDatabase.LastError));
      if (m_objMessageDB.LastError != 0)
        return;

      // Count all incoming unprocessed messages
      strFilter = "DirectionID='IN' AND StatusID='RECEIVED' AND TriggerStatusID=''";
      nCount = m_objMessageDB.Count("", strFilter);
      Console.WriteLine("Count [{0}]: {1}", strFilter, nCount.ToString());
      if (nCount == 0)
        return;

      // Iterate over all incoming unprocessed messages and process them one-by-one
      var objMessageIn = (AXMMCFGLib.Message)m_objMessageDB.FindFirstMessage("", strFilter, "", 100, 
        m_objConstants.FLAG_FINDFIRST_IGNORE_ATTACHMENTS | m_objConstants.FLAG_FINDFIRST_GENERICMESSAGE);
      while (m_objMessageDB.LastError == 0)
      {
        CreateReplyMessage(objMessageIn);

        objMessageIn.TriggerStatusID = m_objConstants.MESSAGETRGSTATUS_PROCESSED;
        m_objMessageDB.Save(objMessageIn);
        
        objMessageIn = (AXMMCFGLib.Message)m_objMessageDB.FindNextMessage();
      }

      Console.WriteLine("Ready.");
    }

    static void CreateReplyMessage(AXMMCFGLib.Message objMessageIn)
    {
      if (objMessageIn.TypeID == "SMS")
      {
        var objMessageOut = (AXMMCFGLib.SmsMessage)m_objMessageDB.Create("SMS");
        Console.WriteLine("Create, result: {0} ({1})", m_objMessageDB.LastError, m_objMessageDB.GetErrorDescription(m_objMessageDB.LastError));

        var objSms = (AXMMCFGLib.SmsMessage)objMessageIn.GetTypeObject();
        objMessageOut.FromAddress = objSms.ToAddress;
        objMessageOut.ToAddress = objSms.FromAddress;
        objMessageOut.Body = "Re: " + objSms.Body;
        objMessageOut.ChannelID = "";

        m_objMessageDB.Save(objMessageOut);
        Console.WriteLine("Save, result: {0} ({1})", m_objMessageDB.LastError, m_objMessageDB.GetErrorDescription(m_objMessageDB.LastError));
      } else
      {
        objMessageIn.AddTrace("No reply generated");
      }     
    }

  }
}
