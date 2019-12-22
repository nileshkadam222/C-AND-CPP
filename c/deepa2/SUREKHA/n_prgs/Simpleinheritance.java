// A simple example ofinheritance.
// Create a super class.

class A
{
  int i,j;
  
  void showij()
  {
   System.out.println("i and j : " + i + " " + j);
  }
}
// Creat a SubClass by extending class A.
 class B extends A
{ 
  int k;
   
  void showk()
  {
   System.out.println("k : " + k);
  }
  void sum()
  {
   System.out.println("i + j + k : " + (i+j+k));
  }
}

class Simpleinheritance
{
  public static void main(String args[])
	{
	 A superob = new A();
	 B subob = new B();
//the superclass may be used by itself.
 
 	superob.i = 10;
	superob.j = 20;
	System.out.println("Contents of superob : ");
	superob.showij();
	System.out.println();
/*Te subclass has access to all public members of its suerclass.*/
	subob.i = 7;
	subob.j = 8;
	subob.k = 9;
	System.out.println("Contents of subob : ");
	subob.showij();
	subob.showk();
	System.out.println();
	
	System.out.println("Sum of i, j and k in subob : ");
	subob.sum();
	}
}

