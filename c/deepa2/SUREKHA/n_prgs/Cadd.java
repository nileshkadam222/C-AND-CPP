import java.io.*;

class Cadd{
    public static void main(String args [])
    {
       int total = 0, j;
       try{
 	for(j=0; j<args.length; j++)
	total += Integer.parseInt(args[j]);
             }catch(NumberFormatException nfex)
              {
                 System.out.println("\"" + nfex.getMessage() + "\" is not number");
                 System.exit(1);
              } 
               System.out.println("The Sum=" +total);
                System.exit(0);
           }
}