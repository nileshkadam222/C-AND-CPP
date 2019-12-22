import java.awt.*;
import java.awt.event.*;
import java.sql.*;
class com extends Frame implements ActionListener
{
Button b=new Button("insert");
Panel p=new Panel();
com()
{
setSize(300,300);
p.add(b);
add(p);
b.addActionListener(this);
}
public void actionPerformed(ActionEvent e)
{
try
{
String s="insert into stud values(1,'reshma',2000)";
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con=DriverManager.getConnection("jdbc:odbc:abc");
Statement st=con.createStatement();
int i=st.executeUpdate(s);
System.out.println(i+"record inserted");
}
catch(Exception ae){}
}
public static void main(String ar[])
{
com n=new com();
n.setVisible(true);
}
}