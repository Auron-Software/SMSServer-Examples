using System;
using System.Collections.Generic;

namespace Messages.list
{
  public partial class _default : System.Web.UI.Page
  {
    AXMMCFGLib.MessageDB m_objMessageDB;

    protected void Page_Load(object sender, EventArgs e)
    {
      // Create COM objects
      AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();
      m_objMessageDB = new AXMMCFGLib.MessageDB();

      // Open message database 
      var objMessageDB = objDatabase.GetMessageDB();
      if (objDatabase.LastError != 0)
      {
        string ErrorDes = objDatabase.GetErrorDescription(objDatabase.LastError);
        Response.Clear();
        Response.Write(ErrorDes);
        return;
      }

      // Store messages in a IList<XMessage>
      var objMessage = (AXMMCFGLib.SmsMessage)m_objMessageDB.FindFirstMessage("SMS", "", "", 100, 0);
      IList<AXMMCFGLib.SmsMessage> messages = new List<AXMMCFGLib.SmsMessage>();
      while (m_objMessageDB.LastError == 0)
      {
        messages.Add(objMessage);
        objMessage = (AXMMCFGLib.SmsMessage)m_objMessageDB.FindNextMessage();
      }

      // Bind the list to the gridview
      gridMessages.DataSource = messages;
      gridMessages.DataBind();
    }

    /// <summary>
    ///     Converts statusid to statusdescription
    /// </summary>
    /// <param name="input">Statusid</param>
    /// <returns>Statusdescription</returns>
    public string GetStatusDescription(string input)
    {
      return m_objMessageDB.GetStatusDescription(input);
    }
  }
}
