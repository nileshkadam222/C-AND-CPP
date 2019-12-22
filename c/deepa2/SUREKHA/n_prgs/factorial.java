public class factorial
{
    public static void main(String args[])
    {
	long limit = 20L;
	long factorial = 1L;
	for(long i = 1L; i <= limit; i++)
	{
	    factorial = 1L;	
	    for(long factor = 2; factor <= i; factor++)
	    {
		factorial *= factor;
	    }
            System.out.println(i + "! is " + factorial);
	}
     }
}	