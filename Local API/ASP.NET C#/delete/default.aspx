<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="Messages.delete._default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Auron SMS Server ASP.NET Sample</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Literal runat="server" ID="litH3" Visible="false"><h3>Message successfully deleted.</h3></asp:Literal>
        <asp:Literal runat="server" ID="litH2"><h2>Delete a message using ASP.NET</h2></asp:Literal>
        <p>
        Which message do you want to delete ? Type the message ID.
        </p>    
        <asp:TextBox runat="server" ID="txtId" />
        <asp:Button runat="server" ID="btnDelete" Text="Delete" OnClick="btnDelete_Click" />
        <p>
        A list of all message in the message database can be found <a href="../list/default.aspx" target="_blank">Here</a>.
        </p>
    </div>
    </form>
</body>
</html>
