class Cityguide{
    public static void main(String args[])
    {
      char choice;
      System.out.println("M----Mumbai");
      System.out.println("B----Bangalore");
      System.out.println("C----Calcutta");
      System.out.println("Enter Your Choice---->");
      System.out.flush();
     try{
          switch(choice=(char)System.in.read())
         {
           case 'M':
           case 'm': System.out.println("Mumbai: Booklet 5");
         break;
	 
case 'B':
           case 'b': System.out.println("Bangalore: Booklet 9");
         break;

case 'C':
           case 'c': System.out.println("Calcutta: Booklet 15");
         break;

default: System.out.println("Invalid choice");
}
}catch(Exception e)
  {
    System.out.println("I/O Error");
  }
}
}