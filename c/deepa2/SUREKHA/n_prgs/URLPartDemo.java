//To find out the parts of the URL?
import java.io.*;
import java.net.*;

public class URLPartDemo{

public static void main(String args[])
{
   for(int i=0;i<args.length; i++)
  {
   try
   {
      URL  u = new URL(args[i]);
     System.out.println("The protocol is"   + u.getProtocol());
    System.out.println("The hostname is" + u.getHost());
    System.out.println("The portname is" +u.getPort());
    System.out.println("The File Name is" + u.getFile());
     System.out.println("The Reference is" + u.getRef());
}
   catch(MalformedURLException e){
   System.err.println(args[0] + "is not a URL Part");
  }
}
}
}