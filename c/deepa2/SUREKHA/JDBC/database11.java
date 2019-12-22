import java.sql.*;
public class database11
{
public static void main(String args[])
{
System.out.println("inserting values in mysql table");
try
{
//Class.forName("sun.jdbc.odbc.Jdbc.OdbcDriver");
Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
Statement st=con.createStatement();
int val=st.executeUpdate("insert into employee12 values(6,'prash',10000)");
System.out.println("1 row affected");
}
catch(SQLException s)
{
System.out.println("sql statement executed");
}

catch(Exception e)
{
e.printStackTrace();
}
}
}

