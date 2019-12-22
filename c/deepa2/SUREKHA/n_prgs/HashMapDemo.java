import java.util.*;

class HashMapDemo{
	public static void main(String args[]){
		HashMap hm = new HashMap();
		hm.put("John Smith",new Double(4545.44));
		hm.put("Raja Jani", new Double(123.33));
		hm.put("Jock Bar",  new Double(1345.00));
		hm.put("Reema Zha", new Double(99.22));
		hm.put("Jennifer Loo", new Double(-19.88));
		
		Set set = hm.entrySet();
		Iterator i = set.iterator();
		while(i.hasNext()){
			Map.Entry me = (Map.Entry)i.next();
			System.out.print(me.getKey() + ":");
			System.out.println(me.getValue());
		}
		System.out.println();
		double balance = ((Double)hm.get("John Smith")).doubleValue();
		hm.put("John Smith", new Double(balance + 1000));
		System.out.println("John Smith's new balance:"+hm.get("John Smith"));
	          }
}