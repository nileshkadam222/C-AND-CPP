class K
{
    boolean flag;
    K(){ flag = true; }		
    synchronized void k1()
    {
	if(flag == false)
	{
	    flag = true;
	    try
	    {
		System.out.println("Calling Wait");
		wait();
	    }
	    catch(Exception e)
	    {
		e.printStackTrace();
	    }
	}
	else
	{
	    flag = false;
	    System.out.println("Calling notifyAll");
	    notifyAll();
	}
    }
}

class ThreadK extends Thread		
{
    K k;
    static int i;
    ThreadK(K k)
    {
        this.k = k;
    }
    public void run()
    {
        i++;
	k.k1();
	System.out.println("Done" + i);
    }
}

class WaitNotifyDemo
{
    public static void main(String args[])
    {
	K k = new K();
	new ThreadK(k).start();
	new ThreadK(k).start();
    }
} 	