<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="Button_click2._Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title>BUTTON CLICK</title>
</head>
<script language="c#" runat="server">
    private void Button1_click(object sender, System.EventArgs e)
    {
        Label1.Text = " Welcome to my Computer";
    }
    
</script>
<body>
    <form id="form1" runat="server">
    <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    <asp:Button ID="Button1" runat="server" Text="Button" OnClick="Button1_click" > </asp:Button >
    <div>
    
    </div>
    </form>
</body>
</html>
