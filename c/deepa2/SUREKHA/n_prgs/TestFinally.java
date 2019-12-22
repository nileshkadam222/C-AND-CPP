public class TestFinally{	
public static void main(String[] args)
{		
        System.out.println("Executing the program");		  
         try {			
                   System.out.println("In the try block"); 	
                   System.exit(0);                      
               } finally {			
                                System.out.println("In the finally.");		    
                             }	    
             }   
 }