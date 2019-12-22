<%@ Page MasterPageFile="MASTER1.Master" %>


<html>
<head runat="server">
    <title>CONTENT PAGE1</title>
</head>
<body>
    
     <h2>Individual Content</h2>
    <asp:Content ID="Content1" ContentPlaceHolderId="ContentPlaceHolder1" runat="server">
    <form id="form1" runat="server">
    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
    <asp:Button ID="Button1" runat="server" Text="Button" />
      </form> 
  
      </asp:Content>  
    
   
</body>
</html>
