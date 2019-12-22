import java.sql.*;

public class database8{
  public static void main(String[] args) {
  System.out.println("Tabel Deletion Example");
  try{
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource","sa","psurekha11"); 
  try{
  Statement st = con.createStatement();
  st.executeUpdate("DROP TABLE Employees");
  System.out.println ("Table Deletion process is completly successfully!");
  }
  catch(SQLException s){
  System.out.println("Table is not exists!");
  }
  con.close();
  }
  catch (Exception e){
  e.printStackTrace();
  }
  }
} 

