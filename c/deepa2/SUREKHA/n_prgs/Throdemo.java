class Throwdemo
 {
   static void demoproc()
   {
      try{
           throw new NullPointerException("Demo");
         }
          catch(NullPointerException e){
         System.out.println("Caught inside demopro c");
         throw e;   //rethrow the exception
         }
      }
       public static void main(String args[]){
        try{
            demoproc();
           }
            catch(NullPointerException e)
            {
             System.out.println("Recaught:" +e);
            }
          }
}
