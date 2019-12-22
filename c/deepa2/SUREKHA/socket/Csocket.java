import java.io.*;
import java.net.*;


public class Csocket
{
	Socket server;
	DataInputStream kbread,nwread;
	PrintStream nwwrite=null;
	
	public Csocket()
	{
		try
		{
			System.out.println("look up for server:");
			server=new Socket("127.0.0.1",10000);
			System.out.println("connection estalished");
			nwread=new DataInputStream(server.getInputStream());
			kbread=new DataInputStream(System.in);
			nwwrite=new PrintStream(server.getOutputStream());
			while(true)
			{
				System.out.println("Me");
				String s=kbread.readLine();
				nwwrite.println(s);
				String s1=nwread.readLine();
				System.out.println("server:"+s1);
			}
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}
	public static void main(String [] args)
	{
		new Csocket();
	}
	
}