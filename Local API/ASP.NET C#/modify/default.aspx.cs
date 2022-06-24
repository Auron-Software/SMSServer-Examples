using System;
using AXMMCFGLib;

namespace Messages.modify
{
  public partial class _default : System.Web.UI.Page
  {
    protected void btnModify_Click(object sender, EventArgs e)
    {
      int nMessageId;
      if (!int.TryParse(txtId.Text.Trim(), out nMessageId))
      {
        // Make sure message id is a number
        Response.Flush();
        Response.Write("Message ID was not a number");
        return;
      }

      // Create COM objects
      AXMMCFGLib.Constants objConstants = new AXMMCFGLib.Constants();
      AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();

      // Open message database 
      var objMessageDB = objDatabase.GetMessageDB();
      if (objDatabase.LastError != 0)
      {
        string ErrorDes = objDatabase.GetErrorDescription(objDatabase.LastError);
        Response.Clear();
        Response.Write(ErrorDes);
        return;
      }

      // Open message to change
      AXMMCFGLib.Message objMessage = (Message)objMessageDB.Load(int.Parse(txtId.Text), objConstants.FLAG_LOAD_GENERICMESSAGE);
      if (objMessageDB.LastError != 0)
      {
        string ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError);

        Response.Clear();
        Response.Write("Message with given ID not found");
        return;
      }

      // change message body depending on message type
      if (objMessage.TypeID == "SMS")
        ((SmsMessage)objMessage.GetTypeObject()).Body = txtBody.Text;
      else if (objMessage.TypeID == "EMAIL")
        ((EmailMessage)objMessage.GetTypeObject()).BodyPlainText = txtBody.Text;
      else if (objMessage.TypeID == "FILE")
        ((FileMessage)objMessage.GetTypeObject()).Body = txtBody.Text;
      else
      {
        Response.Clear();
        Response.Write("Unhandled message type (something other than SMS, EMAIL or FILE)");
        return;
      }

      // Save the message to the message database. This way the Messaging server will 
      // pick it up and try to send it.
      objMessageDB.Save(objMessage);
      if (objMessageDB.LastError != 0)
      {
        string ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError);

        Response.Clear();
        Response.Write(ErrorDes);
        return;
      }

      // a 'non-status-update' will not trigger service to check if there is anything to do.
      objMessageDB.NotifyNonStatusUpdate();

      // Display user output
      litH3.Visible = true;
      litH2.Text = "<h2>Modify another message using ASP.NET</h2>";
    }
  }
}
