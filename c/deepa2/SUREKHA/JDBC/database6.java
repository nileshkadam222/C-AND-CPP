import java.sql.*;

public class database6{
  public static void main(String[] args) {
  System.out.println("Getting Column Names Example!");
  try{
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
//"sa","psurekha11");  
 try{
  Statement st = con.createStatement();
  ResultSet rs = st.executeQuery("SELECT * FROM authors");
  ResultSetMetaData md = rs.getMetaData();
  int col = md.getColumnCount();
  System.out.println("Number of Column : "+ col);
  System.out.println("Columns Name: ");
  for (int i = 1; i <= col; i++){
  String col_name = md.getColumnName(i);
  System.out.println(col_name);
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


