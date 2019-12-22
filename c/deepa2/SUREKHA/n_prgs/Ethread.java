class Newthread extends Thread{
	  Newthread(){
	  super("Hello Java");
 	 System.out.println("Child Thread:" + this);
	  start();
                     }
	public void run(){
   	try{
     	  for(int i = 5; i>0; i--){
      	  System.out.println("Child Thread:" +i);
        	 Thread.sleep(1000);
                   }
                  }catch(InterruptedException e){
  	          System.out.println("Child interrupted.");
                               }
   	          System.out.println("Exiting child thread.");
                 }        
}
class Ethread{
            public static void main(String args[]){
            new Newthread();
            try{
            for(int i =5; i>0; i--){
            System.out.println("Main Thread:" +i);
            Thread.sleep(1000);
           }
           } catch(InterruptedException e){
                     System.out.println("Main thread interrupted.");
                   }
                     System.out.println("Main thread exiting.");
              }
}