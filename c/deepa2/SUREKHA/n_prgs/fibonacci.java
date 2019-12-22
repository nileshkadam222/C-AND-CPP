public class fibonacci
{
    public static void main(String args[])
    {
	long n = 6L;
	long fibo = 1L,temp = 1L;
	byte n1=0;char c='d';char c1='d';
	int p=0,tempp=1,temppp=0;try{
	 c1=(char)System.in.read();}catch(Exception e){}
	n1=(byte)(c1);
	System.out.println(c1);
        if(n == 1)
	    fibo = 1;
        else
        {
	     for(int i = 0;i <= 12;i++)
             {
		 temppp =tempp;
		System.out.println("  "+p);
		tempp=p;
		p+=temppp; 
             }
       }
  }
 }         