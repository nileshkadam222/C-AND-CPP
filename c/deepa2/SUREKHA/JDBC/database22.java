import java.sql.*;

public class database22{
  public static void main(String[] args) {
 System.out.println("Table Creation Example!");
 
  try{

     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
//"sa","psurekha11");  

 try{
  Statement st = con.createStatement();
  String table = 
  "CREATE TABLE Employee12(Emp_code integer, Emp_name varchar(10),emp_sal integer)";
  st.executeUpdate(table);
  System.out.println("Table creation process successfully!");
  }
  catch(SQLException s){
  System.out.println("Table all ready exists!");
  }
  con.close();
  }
  catch (Exception e){
  e.printStackTrace();
  }
  }
}