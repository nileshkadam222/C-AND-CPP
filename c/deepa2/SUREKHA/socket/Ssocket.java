import java.io.*;
import java.net.*;


public class Ssocket
{
	ServerSocket sck;
	DataInputStream kbread,nwread;                                                                                                                                                                                         
	PrintStream nwwrite;
	
	public Ssocket()
	{
		try
		{
			System.out.println("server start 11111");
			sck=new ServerSocket(10000);
			System.out.println("server writing");
			Socket client=sck.accept();
			nwread=new DataInputStream(client.getInputStream());
			kbread=new DataInputStream(System.in);
			nwwrite=new PrintStream(client.getOutputStream());
			while(true)
			{
				
		   		String s1=nwread.readLine();
				System.out.println("client:"+s1);		
				System.out.println("Me:");
				String s=kbread.readLine();
				nwwrite.println(s);
				
				if(s.equalsIgnoreCase("bye") || s1.equalsIgnoreCase("BYE"))
				break;
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	public static void main(String [] args)
	{
		new Ssocket();
	}
	
}