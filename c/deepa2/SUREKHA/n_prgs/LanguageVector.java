import java.util.*;

class LanguageVector{
   public static void main(String args[])
   {
     Vector list = new Vector();
     if(args.length <= 0)
     {
	System.out.println("No. of arguments  = 0");	
	System.exit(0);
      }
      else
	{
		
      int length = args.length;
      for(int i=0; i<length; i++)
      {
        list.addElement(args[i]);
      }
       list.insertElementAt("Cobol", 2);
       int size = list.size();
      String listArray[] = new String[size];
       list.copyInto(listArray);
      System.out.println("List of languages");
       for(int i=0; i<size; i++)
      {
        System.out.println(listArray[i]);
        }
     }
    }
  }
