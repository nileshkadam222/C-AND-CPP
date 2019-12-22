class IfelseTest{
    public static void main(String args[])
    {
      int number[ ] = {10,15,20,25,30};
      int even=0, odd=0;
      for(int i=0; i<number.length; i++)
     {
       if((number[i]%2)==0)
      {
        even +=1;
      }
       else 
      {
              odd +=1;
             }
     }
	System.out.println("Even Number:" +even);
                    System.out.println("Odd Number:" +odd);
         }
}