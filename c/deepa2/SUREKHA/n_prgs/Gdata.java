import java.sql.*; 

class Gdata {
public static void main(String[] args) {

try {

	Class.forName("oracle.jdbc.driver.OracleDriver");

	Connection con = DriverManager.getConnection(
"jdbc:oracle:thin:@localhost:1521:cat", "system","manager");

	Statement st = con.createStatement(); 

	ResultSet rs = st.executeQuery("Select ename, city from empr");

	while (rs.next())
        {
                    System.out.println(rs.getString(1) + "'The details are: " +rs.getString(2)); 
         }
	rs.close();
	st.close();
	con.close(); 

       } catch(ClassNotFoundException cnfException) { 
	System.out.println("The error occured " +"in Oracle driver: " + cnfException);

	} catch(SQLException sqlException) { 
		System.out.println(
	"The  error reading from  empr table: " +sqlException);
	}
    }
}