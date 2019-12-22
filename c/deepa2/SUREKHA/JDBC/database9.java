import java.sql.*;

public class database9{
  public static void main(String[] args) {
  System.out.println("Table Example");
  try{
     Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
     Connection      con=DriverManager.getConnection("jdbc:odbc:mydatasource"); 
     DatabaseMetaData dbmd=con.getMetaData();
     String[] tabTypes={"TABLE"};
    System.out.println(" ");
    System.out.println(" Table names");
    System.out.println(" ");
    ResultSet tablesRs=dbmd.getTables(null,null,null,tabTypes);
    while(tablesRs.next())
    {  
          System.out.println(tablesRs.getString("table_Name"));
     }
          con.close();
   
}
catch(Exception e)
{
   System.out.println("error::" +e);
}
}
}

  