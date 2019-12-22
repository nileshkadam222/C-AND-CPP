import java.sql.*;

public class database1
{
   public static void main(String args[])
   {
  
   try
   {
     String str="select * from authors where city like 'v%'";
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
      //for windows authentication sql server

     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
     //,"sa","psurekha11");  
      
Statement stmt=con.createStatement();
ResultSet rs=stmt.executeQuery(str);
System.out.println("author id \t Firstname\t lastname\tcity");
while(rs.next())
{
   String id=rs.getString("au_id");
   String lname=rs.getString("au_fname");
   String fname=rs.getString("au_lname");
   String city=rs.getString("city");

       System.out.println();

       //System.out.println(id + "\t");
  if(fname.length() <=7)
      System.out.print(id +"\t\t" + fname + "\t\t");
   else
    System.out.print(id + "\t\t"+ fname + "\t");
   if(lname.length() <=7)
    System.out.print(lname + "\t\t");
   else
   System.out.print(lname + "\t");
    System.out.print(city);
}
con.close();
}
catch(Exception ex)
{
         System.out.println("error occured");
         System.out.println("error:" + ex);
}
}
}
   