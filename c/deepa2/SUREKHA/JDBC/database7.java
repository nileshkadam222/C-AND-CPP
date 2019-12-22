import java.sql.*;

public class database7{

 
  public static void main(String args[]) {

  PreparedStatement pst = null;
  ResultSet rs = null;

  try {
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
//"sa","psurekha11");
     con.setAutoCommit(true);

  String sql =
  "insert into Employees (FirstName,LastName) values(?,?)";
  pst = con.prepareStatement(sql);

  pst.setString(1, "priya");
  pst.setString(2, "kulkarni");

  pst.executeUpdate();
  pst.close();

  sql = "select * from Employees";
  pst = con.prepareStatement(sql);

  rs = pst.executeQuery();

  while (rs.next()) {
  System.out.print(rs.getString(1) + "\t");
  System.out.print(rs.getString(2) + "\t");
  
  }
  rs.close();
  pst.close();
  con.close();

  } catch (Exception e) {

   }
  }
}