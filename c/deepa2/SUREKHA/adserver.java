import java.rmi.*;
import java.net.*;
public class adserver 
{
public static void main(String ar[]) 
{
try
{
System.out.println("Server stat...");
adsimpl ads=new adsimpl();
Naming.rebind("adserver",ads);
}
catch(Exception e){ System.out.println("exception="+e);}
}
}