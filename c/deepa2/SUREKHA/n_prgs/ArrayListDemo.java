import java.util.*;

class ArrayListDemo{
 public static void main(String args[])
 {
   ArrayList al = new ArrayList();
   System.out.println("Initial size of al:" +al.size());
   al.add("Hi");
   al.add("There");
   al.add("one");
   al.add("two");
   al.add("three");
   al.add("four");
   al.add(1, "Java");
   System.out.println("Size after additions:" +al.size());
   System.out.println("Contents of al:" +al);
   al.remove("three");
   al.remove(4);
   System.out.println("Size of al after delete:" + al.size());
   System.out.println("Contents of al:" +al);
  }
}