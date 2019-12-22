import java.util.*;

class HashtableDemo{
    public static void main(String args[])
    {
      Hashtable hashtable = new Hashtable();
      hashtable.put("apple", "red");
      hashtable.put("orange", "redish");
      hashtable.put("strawberry", "pink");
      hashtable.put("lime", "green");
      hashtable.put("banana", "yellow");
      Enumeration e = hashtable.keys();
       while(e.hasMoreElements()){
      Object k = e.nextElement();
      Object v = hashtable.get(k);
      System.out.println("key=" +k+"; value =" +v);                    
      }
      System.out.println("\nThe color of an apple is:");
    Object v = hashtable.get("apple");
     System.out.println(v);
    }
}
