<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="usercontrol2._Default" %>
<%@ Register TagPrefix="abc" TagName="header"  Src="~/mycontrol1.ascx" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>Untitled Page</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    <h1>welcome to password validator control</h1>
    <abc:header ID="mycontrol1" runat="server" />
    
    </div>
    </form>
</body>
</html>
