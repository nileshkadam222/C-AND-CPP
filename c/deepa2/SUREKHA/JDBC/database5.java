import java.sql.*;

public class database5{
  public static void main(String[] args) {
  System.out.println
("Example for Deleting All Rows from a database Table!");
  
  try{
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
     //"sa","psurekha11");  

  try{
  Statement st = con.createStatement();
  String sql = "DELETE FROM employee12";
  int delete = st.executeUpdate(sql);
  if(delete == 0){
  System.out.println("All rows are completelly deleted!");
  }
  }
  catch(SQLException s){
  System.out.println("SQL statement is not executed!");
  }
  }
  catch (Exception e){
  e.printStackTrace();
  }
  }
}
