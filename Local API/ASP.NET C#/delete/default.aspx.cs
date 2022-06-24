using System;
using AXMMCFGLib;

namespace Messages.delete
{
  public partial class _default : System.Web.UI.Page
  {
    protected void btnDelete_Click(object sender, EventArgs e)
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

      // Delete the message
      string strid = "ID=" + txtId.Text;
      objMessageDB.Delete("", strid);
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
      litH2.Text = Server.HtmlDecode("<h2>Delete a message using ASP.NET</h2>");
    }
  }
}
