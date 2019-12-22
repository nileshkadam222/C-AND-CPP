abstract class Shape{
          void display(){
             		System.out.println("Abstract class defined.");
                                    }
                     }
class Circle extends Shape{
               void display(){
                System.out.println("This is Circle.");
                         }
           }
class Rectangle extends Shape{
               void display(){
                System.out.println("This is Rectangle.");
                         }
           }

 class Triangle extends Shape{
         void display(){
         System.out.println("This is Triangle");
          }
}

class AbstractDemo1{
      public static void main(String args[]){
      Shape s = new Circle();
         s.display();
         s = new Rectangle();
         s.display();
         s = new Triangle();
         s.display();
     } 
}