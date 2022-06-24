<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="Messages.create._default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Auron SMS Server ASP.NET Sample</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    <asp:Literal runat="server" ID="litH3" Visible="false"><h3>Message succesfully added to queue !</h3></asp:Literal>
    <asp:Literal runat="server" ID="litH2" Visible="true"><h2>Send a message using ASP.NET</h2></asp:Literal>
    
    <table width="700">
        <tr>
            <td>Type:</td>
            <td>
                <asp:DropDownList runat="server" ID="ddlType">
                    <asp:ListItem>SMS</asp:ListItem>
                    <asp:ListItem>E-mail</asp:ListItem>
                </asp:DropDownList>
            </td>
        </tr>
        <tr>
            <td>Channel:</td>
            <td><asp:TextBox runat="server" ID="txtChannel" Text="0" />&nbsp;Use '0' to select the first available channel.</td>
        </tr>        
        <tr>
            <td>To:</td>
            <td><asp:TextBox runat="server" ID="txtTo" />&nbsp;E-mail adress or <a href="http://www.activexperts.com/support/mmserver/index.asp?kb=Q8000020" target="_blank">phone number</a></td>
        </tr>
        <tr>
            <td valign="top">Body:</td>
            <td><asp:TextBox runat="server" ID="txtBody" TextMode="MultiLine" Text="Auron SMS Server test message" /></td>
        </tr>
        <tr>
            <td>&nbsp;</td>
            <td><asp:Button runat="server" ID="btnSend" Text="Send message" OnClick="btnSend_Click" /></td>
        </tr>
      </table> 
    </div>
    </form>
</body>
</html>
