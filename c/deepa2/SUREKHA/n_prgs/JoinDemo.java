class ThreadM extends Thread{
      public void run(){
      try{
           for(int i = 0; i<10; i++){
           Thread.sleep(1000);
            System.out.println("Hi");
             }
   }
catch(InterruptedException ex){
                                       ex.printStackTrace();
            } 
   }
}
class ThreadN extends Thread{
        public void run(){
                   try{
                         for(int i = 0; i<20; i++){
                          Thread.sleep(1000);
                          System.out.println("Fi");
                        }
                   }
                      catch(InterruptedException ex){
                          ex.printStackTrace();
                      }
         } 
}
class JoinDemo{
            public static void main(String args[])
          {
            ThreadM tm = new ThreadM();
            tm.start();
            ThreadN tn = new ThreadN();
            tn.start();
            try{
                   tm.join();
                    tn.join();
                    System.out.println("Both threads have finished.");
                   }
                    catch(Exception e){
                   System.out.println("Exception occurred");
                }
      }
}

          