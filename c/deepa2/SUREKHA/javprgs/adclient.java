//java adclient localhost  10 30

import java.rmi.*;
import java.rmi.server.*;
public class adclient
{
public static void main(String ar[])
{
try
{
String s="rmi://"+ar[0]+"/adserver";
adinter ads=(adinter)Naming.lookup(s);
System.out.println("enter no1:");
double a=Double.valueOf(ar[1]).doubleValue();
System.out.println("enter no2:");
double b=Double.valueOf(ar[2]).doubleValue();
System.out.println("sum is="+ads.add(a,b));
}
catch(Exception ae){System.out.println("Ex="+ae);}
}
}