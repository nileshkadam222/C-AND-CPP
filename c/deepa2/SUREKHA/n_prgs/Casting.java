class Casting{
   public static void main(String args[])
    {
      float sum;
       int i;
      sum = 0.5f;
      for(i=1; i<10; i++)
       {
         sum = sum + i/(float) i;
         System.out.print("i = " + i);
	 System.out.println("Sum = "+ sum);
        }
     }
}