import java.sql.*;
public class ColumnInfo
{
public static void main(String args[])
{
	try
	{
	Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
	Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
	String str="select * from "+args[0]+" ";
	Statement stmt=con.createStatement();
	ResultSet rs=stmt.executeQuery(str);
	ResultSetMetaData rsmd=rs.getMetaData();
	rs.next();
	System.out.println("");
	System.out.println("---------------------------------------------");
	System.out.println("Attributes of the "+args[0]+" table");
	System.out.println("");
	System.out.println("---------------------------------------------");	
	for(int i=1;i<=rsmd.getColumnCount();i++)
	{
	System.out.println(rsmd.getColumnName(i)+" : "+rsmd.getColumnTypeName(i));
                 }
	rs.close();
	stmt.close();
	
	}
	catch(Exception e)	
	{
	System.out.println("Error="+e);	
	}
}
}