import java.sql.*;
public class AuthorsInfo
{
public static void main(String args[])
{
try
{
String str="select * from authors where city like 'm%'";
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con=DriverManager.getConnection("jdbc:odbc:MyDataSource"," "," ");
Statement stmt=con.createStatement();
ResultSet rs=stmt.executeQuery(str);
System.out.println("Author ID\tFirst Name\tLast Name\tCity");
while(rs.next())
{
String id=rs.getString("au_id");

String lname=rs.getString("au_lname");
String fname=rs.getString("au_fname");
String city=rs.getString("city");
System.out.println(id+"\t");
if(fname.length()<=7)
 System.out.print(fname+"\t");
else
     System.out.print(fname+"\t");
if(lname.length()<=7)
  System.out.print(lname+"\t\t");
else
     System.out.print(lname+"\t");
     System.out.println(city);
}
con.close();
}
catch(Exception e)
{
System.out.println("Error occurred");
System.out.println("Error :"+e);
}
}
}
