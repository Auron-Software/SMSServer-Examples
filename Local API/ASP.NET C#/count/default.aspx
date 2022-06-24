<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="Messages.count._default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Auron SMS Server ASP.NET Sample</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <p>
            Number of messages in database: <asp:Literal runat="server" ID="litMessages" />
        </p>
    </div>
    </form>
</body>
</html>
