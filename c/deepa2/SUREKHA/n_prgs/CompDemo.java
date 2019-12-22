import java.util.*;

class MyComp implements Comparator{
	public int compare(Object a, Object b){
	String astr, bstr;
	astr = (String)a;
	bstr = (String)b;
	return bstr.compareTo(astr);
                    }
}

class CompDemo{
   public static void main(String args[]){
   TreeSet ts = new TreeSet(new MyComp());
	ts.add("C");
                    ts.add("A");
	ts.add("B");
	ts.add("E");
	ts.add("F");
	ts.add("D");
  
  Iterator i = ts.iterator();
      while(i.hasNext()){
      Object element = i.next();
      System.out.print(element + " ");
     }
     System.out.println();
    }
}
