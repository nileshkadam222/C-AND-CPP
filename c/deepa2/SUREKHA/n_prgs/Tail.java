import java.io.*;

class Tail
{
    public static void main(String args[])
    {
	try
	{
	    RandomAccessFile raf = new RandomAccessFile(args[0], "r");
	    long count = Long.valueOf(args[1]).longValue();
	    long position = raf.length();
	    position -= count;
	    if(position < 0)
	        position = 0;	
	    raf.seek(position);

	    while(true)
	    {
		try
		{	
		    byte b = raf.readByte();
		    System.out.print((char)b);
		}
		catch(EOFException eofe)
		{   break; }
	    }
	}
	catch(Exception	e)
	{   e.printStackTrace();   }
    }
}