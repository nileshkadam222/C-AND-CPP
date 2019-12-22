import java.net.*;

class DatagramReceiver
{
    private final static int BUFSIZE = 20;

    public static void main(String args[])
    {
        try
        {
            int port = Integer.parseInt(args[0]);
            DatagramSocket ds = new DatagramSocket(port);
            byte buffer[] = new byte[BUFSIZE];
            while(true)
            {
                DatagramPacket dp = new DatagramPacket(buffer, buffer.length);
                ds.receive(dp);

                String str = new String(dp.getData());
                System.out.println(str);
            }
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
}
