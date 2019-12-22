import java.util.*;

class EnumerationDemo{
public static void main(String args[])
{
	Vector v = new Vector();
	v.addElement(new Integer(5));
	v.addElement(new Float(-55.15f));
	v.addElement(new String("Hello Java"));
	v.addElement(new Long(55555));
	v.addElement(new Double(-54.35e-15));

	Enumeration e = v.elements();
	while(e.hasMoreElements())
                    {
                         Object o = e.nextElement();
	     System.out.println(o);
                    }
}
}