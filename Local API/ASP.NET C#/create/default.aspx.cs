using System;

namespace Messages.create
{
  public partial class _default : System.Web.UI.Page
  {
    protected void btnSend_Click(object sender, EventArgs e)
    {
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

      // Create a new message
      // Set the message type according to the users input
      if (ddlType.SelectedValue == "SMS")
      {
        var objMessage = (AXMMCFGLib.SmsMessage)objMessageDB.Create("SMS");
        objMessage.ChannelID = txtChannel.Text;
        objMessage.ToAddress = txtTo.Text;
        objMessage.Body = txtBody.Text;
        objMessageDB.Save(objMessage);
      }
      else
      {
        var objMessage = (AXMMCFGLib.EmailMessage)objMessageDB.Create("EMAIL");
        objMessage.ChannelID = txtChannel.Text;
        objMessage.ToAddress = txtTo.Text;
        objMessage.BodyPlainText = txtBody.Text;
        objMessageDB.Save(objMessage);
      }        

      if (objMessageDB.LastError != 0)
      {
        string ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError);

        Response.Clear();
        Response.Write(ErrorDes);
        return;
      }

      // trigger the service to start immediately
      objMessageDB.NotifyStatusUpdate();

      // Change H3 visibility & h2 text
      litH3.Visible = true;
      litH2.Text = Server.HtmlDecode("<h2>Send another message using ASP.NET</h2>");
    }
  }
}
