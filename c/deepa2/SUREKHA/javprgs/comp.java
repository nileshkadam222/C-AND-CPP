import java.awt.*;
import java.awt.event.*;
import java.sql.*;
class comp extends Frame implements ActionListener
{
Button b=new Button("delete");
Panel p=new Panel();
comp()
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
String s="delete from stud where rno=1";
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con=DriverManager.getConnection("jdbc:odbc:abc");
Statement st=con.createStatement();
int i=st.executeUpdate(s);
System.out.println(i+"record deleted");
}
catch(Exception ae){}
}
public static void main(String ar[])
{
comp n=new comp();
n.setVisible(true);
}
}