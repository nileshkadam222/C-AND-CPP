import java.util.*;

class StringTokenizerDemo{
	public static void main(String args[]){
	String str = " Welcome/and/wish/you/A/Very/Happy/New Year";
	StringTokenizer st = new StringTokenizer(str, "/");
	while(st.hasMoreTokens())
                    {
     	   String s = st.nextToken();
                       System.out.println(s);
                     }
           }
}