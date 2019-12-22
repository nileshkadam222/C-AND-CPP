import java.sql.*;
public class PlaceOrder
{
	public static void main(String args[])
	{
		try
		{
		Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		Connection con=DriverManager.getConnection("jdbc:odbc:mydatasource");
		Statement stmt=con.createStatement();
		con.setAutoCommit(false);
		stmt.addBatch("insert into product(p_id,p_desc) values(1001,'Printer')");
		stmt.addBatch("insert into product(p_id,p_desc) values(1002,'Scanner')");
		stmt.addBatch("insert into product(p_id,p_desc) values(1003,'keyb')");
		int []result=stmt.executeBatch();
		System.out.println("");
		System.out.println("using statement object");
		System.out.println("---------------------------------------------");
		for(int i=0;i<result.length;i++)
		{
		System.out.println("row affected by "+(i+1)+" insert statement: "+result[i]);
		}
		stmt.close();
		PreparedStatement ps=con.prepareStatement("insert into product(p_id,p_desc) values(?,?)");
		System.out.println("");
		System.out.println("using statement object");
		System.out.println("---------------------------------------------");
		ps.setInt(1,1004);
		ps.setString(2,"Mouse");
		ps.addBatch();
		ps.setInt(1,1005);
		ps.setString(2,"Mon");
		ps.addBatch();
		int []numUpdates=ps.executeBatch();
		for(int i=0;i<numUpdates.length;i++)
		{
		System.out.println("row affected by "+(i+1)+" insert statement: "+numUpdates[i]);

		}
		con.commit();
		con.close();
		}
		catch(BatchUpdateException bue)	
		{
		System.out.println("Error="+bue);
		}
		catch(SQLException sl)	
		{
		System.out.println("Error="+sl);
		}
		catch(Exception e)	
		{
		System.out.println("Error="+e);
		}

	}
}