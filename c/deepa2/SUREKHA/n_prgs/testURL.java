import java.net.*;

class testURL
{
    public static void main(String args[])
    {
        try
        {
            URL url = new URL(args[0]);

            System.out.println("Protocol of URL is :" + url.getProtocol());
            System.out.println("Port no. of URL is :" + url.getPort());
            System.out.println("Host of URL is :" + url.getHost());
            System.out.println("File in URL is :" + url.getFile());
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
