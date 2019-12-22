Final Methods and variables:
When you wish to prevent the subclass from overriding the members of the superclass, we can declare them as final using keyword final as a modifier .
	final int SIZE = 100;
                    final void ShowStatus();

Final Class:
It is not subclass for security reason. A class that cannot be subclassed is called as a final class.
  	final class A
        	final class B extends A      //It is illegal

Finalize method: Java runtime is an automatic garbage collecting system. It automatically frees up the memory resources used by the objects. In order to free other resource we must use a finalise() method.

Abstract Method: This method must always be redefined in a subclass thus making overriding compulsory. This is done by using the modifier abstract in the method defination.
             abstract class Shape
               {
               ===========
               ===========
               }
When a class contains one or more abstract methods, it should also be declared as an abstract.
The conditions are:-
1) We cannot use abstract classes to initiate objects directly.
2) The abstract methods of an abstract class must be defined in subclass.
3) We cannot declare abstract constructors or abstract static methods.

Abstract Class: The abstract class never creates its own object. Even the method which you define in abstract class is called as an abstract method. But the method implementation is always deferred to the subclass. You can extend abstract class one time only.

Example:
abstract class Shape{
          void display(){
             System.out.println("Abstract class defined.");
             }
       class Circle extends Shape{
      void display(){
         System.out.println("This is a circle.");
        }
  }
class Rectangle extends Shape{
        void display()
        System.out.println("This is Rectangle");
         }
 class Triangle extends Shape{
         void display(){
         System.out.println("This is Triangle");
          }
}
class AbstractDemo{
      public void main(String args[]){
      Shape s = new Circle();
          s.display();
         s = new Rectangle();
        s.display();
       s = new Triangle();
       s.display();
     } 
}