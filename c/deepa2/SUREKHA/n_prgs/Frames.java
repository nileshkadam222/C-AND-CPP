import java.io.*;
import java.sql.*;
import java.awt.*;

class Frames extends Frame
{

	static TextArea ta;
	Frames()
	{
		ta=new TextArea();
		add(ta);
	}
public static void main(String args[]) throws Exception
	{
	   String temp = " ";
           	   Frames d = new Frames();
	                  d.setSize(300,300);
	 d.setVisible(true);
	 Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
	 Connection con = DriverManager.getConnection("jdbc:odbc:rest","","");
		Statement st=con.createStatement();
		ResultSet rs= st.executeQuery("Select * from emp");
		while(rs.next())
		{
		temp = temp+"\n" +rs.getString("ename")+rs.getString("city");
		}
		
		ta.setText(temp);
		}
}


	
