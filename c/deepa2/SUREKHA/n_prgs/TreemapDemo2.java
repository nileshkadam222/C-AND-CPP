import java.util.*;

class TComp implements Comparator{
  public int compare(Object a, Object b){
  int i,j,k;
  String astr, bstr;
  astr = (String)a;
  bstr = (String)b;
//find index of beginning of last name
  i = astr.lastIndexOf(' ');
  j = bstr.lastIndexOf(' ');
 k = astr.substring(i).compareTo(bstr.substring(j));
 if(k==0)   //last names match, check entire name
  return astr.compareTo(bstr);
  else
   return k;
}
}
class TreemapDemo2{
   public static void main(String args[]){
   TreeMap tm = new TreeMap(new TComp());
   tm.put("Rajesh Dave",   new Double(3456.44));
   tm.put("Reema Dave",   new Double(5556.40));
   tm.put("Sangita Patil",   new Double(1234.22));
   tm.put("Akbar Mohmd", new Double(76.42));
   tm.put("Fardeen Shah", new Double(-53.04));

//Get a set of the entries
Set set = tm.entrySet();

//Get an iterator
Iterator itr = set.iterator();
  while(itr.hasNext()){
   Map.Entry me = (Map.Entry)itr.next();
   System.out.print(me.getKey() + ":");
   System.out.println(me.getValue());
  }
//deposit 1000 into Rajesh Dave's account
  double balance = ((Double)tm.get("Rajesh Dave")).doubleValue();
  tm.put("Rajesh Dave", new Double(balance + 1000));
  System.out.println("Rajesh Dave's new balance: "+ tm.get("Rajesh Dave"));
}
}