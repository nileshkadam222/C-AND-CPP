<%@ Page Language="C#" MasterPageFile="MasterPage1.master" AutoEventWireup="true"  CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Untitled Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <asp:Content ContentPlaceHolderId="ContentPlaceHolder1" runat="server">
        <h2>Individual Content</h2>
        <p>Paragraph 1</p>
        <p>Paragraph 2</p>
       </asp:Content>

    </div>
    </form>
</body>
</html>
