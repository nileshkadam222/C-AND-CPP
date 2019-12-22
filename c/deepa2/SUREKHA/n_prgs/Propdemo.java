import java.util.*;

class Propdemo{
	public static void main(String args[]){
		Properties capitals = new Properties();
		Set states; String str;
		capitals.put("Maharashtra","Mumbai");
		capitals.put("Gujarat", "Gandhinagar");
		capitals.put("M.P.", "Bhopal");
		capitals.put("Uttaranchal", "Dehradun");
		capitals.put("Chhatisgarh", "Raipur");
		
		states = capitals.keySet();
		Iterator itr = states.iterator();
		while(itr.hasNext()){
			str =(String)itr.next();
			System.out.println("The capital of"+str+"is"+
			capitals.getProperty(str)+".");
		}
		System.out.println();
		str = capitals.getProperty("Lucknow", "Not Found");
		System.out.println("The capital of Lucknow is:" +str+".");
	}
}
