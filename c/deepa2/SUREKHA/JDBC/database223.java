import java.sql.*;

public class database223{

 public static void main(String[] args) 
{
 
  System.out.println("Inserting values in Mysql database table!");
  
  try{

     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
     //"sa","psurekha11");  
  try{
  Statement st = con.createStatement();
  int val = st.executeUpdate("insert into employee12 VALUES(111,'ravi',5000)");
  System.out.println("1 row affected");
  }
  catch (SQLException s){
  System.out.println("SQL statement is not executed!");
  }
  }
  catch (Exception e){
  e.printStackTrace();
  }
  }
} 