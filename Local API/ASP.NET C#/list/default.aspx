<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="default.aspx.cs" Inherits="Messages.list._default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Auron SMS Server ASP.NET Sample</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <h2>All messages:</h2>
    
        <asp:GridView runat="server" ID="gridMessages" AutoGenerateColumns="false">
            <Columns>
                <asp:BoundField DataField="Body" HeaderText="ID" />
                <asp:TemplateField HeaderText="Type">
                    <ItemTemplate>SMS</ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Status">
                    <ItemTemplate><%# GetStatusDescription((string)Eval("StatusID")) %></ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="FromAddress">
                    <ItemTemplate><%# String.IsNullOrEmpty((string)Eval("FromAddress")) ? "&lt;empty&gt;" : Eval("FromAddress")%></ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="FromAddress">
                    <ItemTemplate><%# String.IsNullOrEmpty((string)Eval("ToAddress")) ? "&lt;empty&gt;" : Eval("ToAddress")%></ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Body">
                    <ItemTemplate><%# String.IsNullOrEmpty((string)Eval("Body")) ? "&lt;empty&gt;" : Eval("Body")%></ItemTemplate>
                </asp:TemplateField>
            </Columns>
        </asp:GridView>
    </div>
    </form>
</body>
</html>
