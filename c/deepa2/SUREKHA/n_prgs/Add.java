import java.io.*;

public class Add{
    public static void main(String args[ ]) 
    {
      InputStreamReader stdin =new InputStreamReader(System.in);
      BufferedReader br = new BufferedReader(stdin);
       int i1=0,i2 = 0;
       String s1, s2;
       try{
    	System.out.print("Enter First Number:");
	s1 = br.readLine();
	i1 = Integer.parseInt(s1);
	System.out.print("Enter Second Number:");
	s2 = br.readLine();
	i2 = Integer.parseInt(s2);
           }catch(IOException ioex)
            {
               System.out.println("Input Error");
               System.exit(0);
            }catch(NumberFormatException nfex)
            {
              System.out.println("\"" +nfex.getMessage()+"\" is not number.");
              System.exit(1);
            }
             System.out.println(i1+"+" +i2+ "=" +(i1+i2));
             System.exit(0);
             }
}