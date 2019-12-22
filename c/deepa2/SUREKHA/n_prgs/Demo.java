import java.sql.*;
import java.io.*;

class Demo{
   public static void main(String args[]) throws Exception{
	Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
   	Connection con = DriverManager.getConnection("jdbc:odbc:rest"," "," ");
	Statement st = con.createStatement();
	ResultSet rs = st.executeQuery("Select * from emp");
	while(rs.next())
	{
	  System.out.println("\n"+rs.getString("ename"));
                      System.out.println(rs.getString("city"));
                     }
	  System.out.println("Your Login is successfully.");
                     con.close();
             }
}