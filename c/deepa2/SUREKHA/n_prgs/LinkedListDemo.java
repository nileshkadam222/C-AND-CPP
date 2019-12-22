import java.util.*;
 
class LinkedListDemo{
 public static void main(String args[])
 {
   LinkedList l1 = new LinkedList();
   	l1.add("one");
   	l1.add("two");
   	 l1.add("three");
	 l1.add("four");
	 l1.add("five");
	 l1.addLast("six");
	 l1.addFirst("zero");
                     l1.add(1,"Tour") ;

System.out.println("Original contents of l1: "+l1);
  	l1.remove("One");
	l1.remove(2);
System.out.println("Contents l1 after delete:"+l1);
	l1.removeFirst();
	l1.removeLast();
System.out.println("l1 after deleting first and last:"+l1);
	Object val = l1.get(2);
	l1.set(2,(String) val + "Changed");
System.out.println("l1 after change:"+l1);
   }
}                 