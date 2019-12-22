import java.sql.*;
public class tablenames
{
     public static void main(String args[])
    {
          try
          {
              Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
              Connection  con=DriverManager.getConnection("jdbc:odbc:Mds"," ", " ");
              DatabaseMetaData dbmd = con.getMetaData();
             String[]  tabTypes={"table"};
             System.out.println("");
             System.out.println("Tables names");
             System.out.println("________________");
            ResultSet   ts=dbmd.getTables(null,null,null,tabTypes);
            while(ts.next())
            {
                 System.out.println(ts.getString("table_name"));
                 con.close();
           }
         }
           catch(Exception e)
          {
                  System.out.println("error:"  + e);
          }
}
}

