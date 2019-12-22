import  javax.swing.*;
import  java.awt.*;
import java.awt.event.*;
import java.sql.*;
public class ProductInfo extends JFrame implements ActionListener
{
JLabel heading,id,desc,rate,quantity,unit_of_msr,empty_label,error;
JTextField idField,descField,rateField,quantityField,unit_of_msrField;
JButton insert,delete,update,clear,exit;
GridBagLayout gb1;
GridBagConstraints gbc;
JComboBox idCombo;
Connection con;
PreparedStatement stat;
Statement stmt;
ResultSet rs;
Font f;
JPanel jpl;
public ProductInfo()
{
try
{
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
con=DriverManager.getConnection("jdbc:odbc:mds"," "," ");
stmt=con.createStatement();
rs=stmt.executeQuery("select p_id from product");
while(rs.next())
{
 idCombo.addItem(Integer.toString(rs.getInt(1)));
}
con.close();
}
catch(Exception e)
{
System.out.println("Error :"+e);
}
idCombo.addActionListener(this);
}

public void actionPerformed(ActionEvent ae)
{
if(ae.getActionCommand()=="Exit")
	System.exit(0);
if(ae.getActionCommand()=="Delete")
{
try
{
con=DriverManager.getConnection("jdbc:odbc:mds"," "," ");
stat=con.prepareStatement("DELETE from p_id WHERE p_id=?");
String selected_id=idCombo.getSelectedItem().toString();
int id=Integer.parseInt(selected_id);
stat.setInt(1,id);
stat.executeUpdate();
con.close();
idCombo.removeActionListener(this);
con=DriverManager.getConnection("jdbc:odbc:mds"," "," ");
stmt=con.createStatement();
rs=stmt.executeQuery("SELECT p_id FROM product");
idCombo.removeAllItems();
while(rs.next())
idCombo.addItem(Integer.toString(rs.getInt(1)));
con.close();
idCombo.addActionListener(this);

idField.setText(" ");
descField.setText(" ");
rateField.setText(" ");
quantityField.setText(" ");
unit_of_msrField.setText(" ");
error.setText("Row Deleted ");
}
catch(Exception e)
{
System.out.println("Error"+e);
error.setText("Rows can't be deleted");
}
}
if(ae.getActionCommand()=="Insert")
{
try
{
con=DriverManager.getConnection("jdbc:odbc:mds"," "," ");
stat=con.prepareStatement("INSERT INTO product VALUES(?,?,?,?,?)");
String id=idField.getText();
String description=descField.getText();
String rate=rateField.getText();
String quantity=quantityField.getText();
String unit_of_msr=unit_of_msrField.getText();
stat.setInt(1,Integer.parseInt(id));
stat.setString(2,description);
stat.setDouble(3,Double.parseDouble(rate));
stat.setInt(4,Integer.parseInt(quantity));
stat.setString(5,unit_of_msr);
stat.executeUpdate();
con.close();
idCombo.removeActionListener(this);
con=DriverManager.getConnection("jdbc:odbc:mds"," "," ");
stmt=con.createStatement();
rs=stmt.executeQuery("SELECT p_id FROM product");
idCombo.removeAllItems();

while(rs.next())
idCombo.addItem(Integer.toString(rs.getInt(1)));
con.close();
idCombo.addActionListener(this);
error.setText("Row Inserted ");
}
catch(Exception e)
{
System.out.println("Error"+e);
error.setText("Rows can't be Inserted");
}
}
if(ae.getSource()==idCombo)
{
try
{
con=DriverManager.getConnection("jdbc:odbc:mds",""," ");
String selected_id=idCombo.getSelectedItem().toString();
int id=Integer.parseInt(selected_id);
stmt=con.createStatement();
rs=stmt.executeQuery("select  p_desc,p_rate,p_qty,unit_of_msr  FROM  product WHERE p_id=id");
rs.next();
idField.setText("selected_id ");
descField.setText(" rs.getString(1)");
rateField.setText("Double.toString(rs.getDouble(2)) ");
quantityField.setText(" Integer.toString(rs.getInt(3)) ");
unit_of_msrField.setText(" rs.getString(4)");
con.close();
}
catch(Exception e)
{
System.out.println("Error"+e);
}
}
if(ae.getActionCommand()=="Update")
{
try
{

con=DriverManager.getConnection("jdbc:odbc:mds",""," ");
stat=con.prepareStatement("UPDATE Product SET p_desc=?,p_rate=?,p_qty=?,unit_of_msr=? where p_id=?");
String description=descField.getText();
String rate=rateField.getText();
String quantity=quantityField.getText();
String unit_of_msr=unit_of_msrField.getText();
String id_selected=idField.getText();
int id=Integer.parseInt(id_selected);

stat.setString(1,description);
stat.setDouble(2,Double.parseDouble(rate));
stat.setInt(3,Integer.parseInt(quantity));
stat.setString(4,unit_of_msr);
stat.setInt(5,id);
stat.executeUpdate();
con.close();
error.setText("Row Updated");
}
catch(Exception e)
{
System.out.println("Error"+e);
error.setText("Rows can't be Updated");
}
}
if(ae.getSource()=="Clear")
{

idField.setText(" ");
descField.setText(" ");
rateField.setText(" ");
quantityField.setText(" ");
unit_of_msrField.setText(" ");
}
}
public static void main(String args[])
{
ProductInfo p1=new ProductInfo();
//p.show();
}
}
