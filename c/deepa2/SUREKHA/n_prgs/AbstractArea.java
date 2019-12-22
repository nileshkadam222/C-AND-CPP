abstract class figure
{
    double dim1, dim2;
    figure(double a, double b)
    {
	dim1 = a;
	dim2 = b;
    }
    
    abstract double area();
}

class Rectangle extends figure
{
   Rectangle(double a , double b)
   {
	super(a,b);
   }	

   double area()
   {
	System.out.println("Inside Rectangle ");
        return dim1 * dim2;
   }
}

class Triangle extends figure
{
   Triangle(double a , double b)
   {
	super(a,b);
   }	

   double area()
   {
	System.out.println("Inside Triangle ");
        return dim1 * dim2 / 2;
   }
}

class AbstractArea
{
    public static void main(String args[])
    {
	Rectangle r = new Rectangle(9, 5);
	Triangle t = new Triangle(10, 8);

	figure figref;
	figref = r;
	System.out.println("Area is :" + figref.area());

	figref = t;
	System.out.println("Area is :" + figref.area());
    }
}