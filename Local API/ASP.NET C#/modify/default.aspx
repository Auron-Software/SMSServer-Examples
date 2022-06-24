<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="Messages.modify._default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Auron SMS Server ASP.NET Sample</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Literal runat="server" ID="litH3" Visible="false"><h3>Message successfully modified.</h3></asp:Literal>
        <asp:Literal runat="server" ID="litH2"><h2>Modify message using ASP.NET</h2></asp:Literal>
        <p>
          This sample will modify the body of a given message to the specified text.
        </p>
        <p>
          Which message do you want to modify ? Type the message ID.
        </p>    
          <table width="700">
            <tr>
              <td>Message ID:</td>
              <td><asp:TextBox runat="server" ID="txtId" Text="1" /></td>
            </tr>
            <tr>
              <td valign="top">Body</td>
              <td><asp:TextBox runat="server" ID="txtBody" TextMode="MultiLine" Text="SMS Messaging Server - ASP Test SMS - New message body" /></td>
            </tr>
            <tr>
              <td>&nbsp;</td>
              <td><asp:Button runat="server" ID="btnModify" Text="Modify" OnClick="btnModify_Click" /></td>
            </tr>
          </table>
        <p>
          A list of all message in the message database can be found <a href="../list/default.aspx" target="_blank">Here</a>.
        </p>
    </div>
    </form>
</body>
</html>
