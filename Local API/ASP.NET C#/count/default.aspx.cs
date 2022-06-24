using System;

namespace Messages.count
{
    public partial class _default : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            // Create COM objects
            AXMMCFGLib.Constants objConstants = new AXMMCFGLib.Constants();
            AXMMCFGLib.Database objDatabase = new AXMMCFGLib.Database();
      
            // Open message database 
            var objMessageDB = objDatabase.GetMessageDB();
            if(objDatabase.LastError != 0)
            {
                string ErrorDes = objDatabase.GetErrorDescription(objDatabase.LastError);
                Response.Clear();
                Response.Write(ErrorDes);
                return;
            }
         
            // Count the ammount of messages in Auron Messaging Server database
            int nMessages = objMessageDB.Count("", "");
            if(objMessageDB.LastError != 0)
            {
                string ErrorDes = objMessageDB.GetErrorDescription(objMessageDB.LastError);

                Response.Clear();
                Response.Write(ErrorDes);
                return;
            }

            // Display results
            litMessages.Text = nMessages.ToString();
        }
    }
}
