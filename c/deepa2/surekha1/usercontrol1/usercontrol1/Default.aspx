<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="usercontrol1._Default" %>
<%@ Register TagPrefix="cr" TagName="wb2" Src="~/WebUserControl1.ascx" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>user control example</title>
</head>
<body>
    <form id="form1" runat="server">
    <h2> a page with a label</h2><hr />
    static page <br /><br />
    <cr:wb2  id=webusercontrol runat="server" />
    </form>
</body>
</html>
