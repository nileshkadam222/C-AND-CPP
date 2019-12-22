class DoubleDemo
{
    public static void main(String args[])
    {
	double d1 = 0;
	double d2 = 0;
	
	double d3 = d1/d2;
	System.out.println(d3);
	
	System.out.println(Double.isInfinite(d3));
	System.out.println(Double.isNaN(d3));

	System.out.println(Double.MAX_VALUE);
	System.out.println(Double.MIN_VALUE);
	System.out.println(Double.POSITIVE_INFINITY);
System.out.println(Double.NEGATIVE_INFINITY);
}
}