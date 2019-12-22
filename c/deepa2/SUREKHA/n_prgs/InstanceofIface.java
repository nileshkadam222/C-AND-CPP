interface Vehicle{
   void drive();
   }
   abstract class Mammal{
   }
   class Bear extends Mammal{
   }
   class Elephant extends Mammal implements Vehicle{
   public void drive(){
   System.out.println("Elephant:drive");
   }
  }
   
  class Horse extends Mammal{
   public void drive(){
   System.out.println("Horse:drive");
    }
   }
   class Lion extends Mammal implements Vehicle{
	public void drive(){
          System.out.println("Lion:Drive");
      }
   }
   class InstanceofIface{
   public final static int NUMMAMMALS = 4;
   public static void main(String args[]){
   Mammal mammals[] = new Mammal[NUMMAMMALS];   // // create an array of references
                      mammals[0] = new Bear();
	  mammals[1] = new Elephant();
	  mammals[2] = new Horse();
  	  mammals[3] = new Lion(); 
   for(int i=0; i<NUMMAMMALS; i++){
    if(mammals[i] instanceof Vehicle){
     Vehicle v = (Vehicle)mammals[i];
             v.drive();
       }
     }
   }
}