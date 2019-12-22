class Producer extends Thread
{
    Queue queue;
    Producer(Queue queue)
    {
	this.queue = queue;
    }
    public void run()
    {
	int i = 0;
	while(i < 10)
	{
	     queue.add(i++);
	     System.out.println("Produced :" + i);
	
        }
    }
}

class Consumer extends Thread
{
    String str;
    Queue queue;
    Consumer(String str, Queue queue)
    {
	this.str = str;
        this.queue = queue;
    }
    public void run()	
    {
	while(true)
        {
	    System.out.println(str + ":" + queue.remove());
         }
     }
}

class Queue
{
    private final static int SIZE = 10;
    int array[] = new int[SIZE];
    int r = 0;
    int w = 0;
    int count = 0;
   
    synchronized void add(int i)
    {
	while(count == SIZE)
	{
	    try
	    {
		wait();
	    }
	    catch(InterruptedException ie)
	    {
		ie.printStackTrace();
		System.exit(0);
	    }
	}
	array[w++] = i;
	if(w >= SIZE)
	    w = 0;
        ++count;
	notifyAll();
    }
 	
    synchronized int remove()
    {
	while(count == 0)
	{
	    try
	    {
		wait();
	    }
	    catch(InterruptedException ie)
	    {
		ie.printStackTrace();
		System.exit(0);
	    }
	}
        int element = array[r++];
	if(r >= SIZE)
	    r = 0;
        --count;
	notifyAll();
	return element;
    }
}	

class ProducerConsumer
{
    public static void main(String args[])
    {
	Queue queue = new Queue();
	new Producer(queue).start();
	new Consumer("Consumer A",queue).start();
	new Consumer("Consumer B",queue).start();
	new Consumer("Consumer C",queue).start();
    }
} 	