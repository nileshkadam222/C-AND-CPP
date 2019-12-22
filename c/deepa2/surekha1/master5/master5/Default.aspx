<%@ Page MasterPageFile="master1.master" Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="master5._Default" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">


<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>disha computers</title>
</head>
<body>

    <asp:Content ID="Content1" ContentPlaceHolderId="ContentPlaceHolder1" runat="server">
        <h2>Individual Content</h2>
        <p>Paragraph 1</p>
        <p>Paragraph 2</p>
        <form runat="server">
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <asp:Button ID="Button1" runat="server" Text="Button" />
        </form>
    </asp:Content>

</body>
</html>
