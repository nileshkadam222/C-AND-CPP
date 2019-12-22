import java.sql.*;

public class database4{
  public static void main(String[] args) {
  System.out.println("An example for Deleting a Row from a Database!");
  try{
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
    //"sa","psurekha11");  
try{
  Statement st = con.createStatement();
  String sql = "DELETE FROM authors WHERE au_fname = 'ravi'";
  int delete = st.executeUpdate(sql);
  if(delete == 1){
  System.out.println("Row is  deleted.");
  }
  else{
  System.out.println("Row is not deleted.");
  }
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
