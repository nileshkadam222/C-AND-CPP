import java.awt.*;
import java.awt.event.*;
import java.sql.*;
import java.swing.*;
class test extends Frame implements ActionListener
{
Panel p=new Panel();
Label l1=new Label("rno");
Label l2=new Label("sname");
Label l3=new Label("sal");
TextField t1=new TextField(10);
TextField t2=new TextField(10);
TextField t3=new TextField(10);
Button b=new Button("insert");
test()
{
setSize(200,200);
p.setLayout(new GridLayout(4,2));
p.add(l1);
p.add(l2);
p.add(l3);
p.add(t1);
p.add(t2);
p.add(t3);
p.add(b);
add(p);
b.addActionListener(this);
}
public void actionPerformed(ActionEvent e)
{
try{
String s= "insert into stud values(?,?,?)";
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con=DriverManager.getConnection("jdbc:odbc:abc");
PreparedStatment st=con.prepareStatement (s);
st.setInt(1,Integer.parseInt(t1.getText()));
st.setString(2,t2.getText(());
st.setInt(3.Integer.parseInt(t1.getText()));
int i=st.executeUpdate();
JOptionPane.showMessageDiallog(null,"record inserted");
t1.settext("");
t2.setText("");
t3.setText("");
}catch (Exception ae){}
}
public static void main(String ar[])
{
test t=new test();
t.setVisible(true);
}
}
