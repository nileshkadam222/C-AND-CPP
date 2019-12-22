import java.util.*;

class TreeMapDemo
{
	public static void main(String args[])
                           {
		TreeMap tm = new TreeMap();
		tm.put("John Smith",new Double(4545.44));
		tm.put("Raja Jani", new Double(123.33));
		tm.put("Jock Bar",  new Double(1345.00));
		tm.put("Reema Zha", new Double(99.22));
		tm.put("Jennifer Loo", new Double(-19.88));
		
		Set set = tm.entrySet();
		Iterator i = set.iterator();
		while(i.hasNext()) {
				Map.Entry me = (Map.Entry)i.next();
				System.out.print(me.getKey() + ":");
				System.out.println(me.getValue());
			             }
		System.out.println();
		double balance = ((Double)tm.get("John Smith")).doubleValue();
		tm.put("John Smith", new Double(balance + 1000));
		System.out.println("John Smith's new balance:"
		+tm.get("John Smith"));
	}
}