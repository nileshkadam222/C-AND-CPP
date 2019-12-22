  /*
#include <iostream.h>
#include<conio.h>

class Box
{
   public:
	  double length;   // Length of a box
	  double breadth;  // Breadth of a box
	  double height;   // Height of a box
};

void main( )
{
   Box Box1;
   Box Box2;
   double volume = 0.0;


   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;

   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;
   getch();
}



#include <iostream.h>
#include<conio.h>

class CRectangle
{
	int x, y;

  public:
	void set_values (int,int);

	int area ()
	{
	return (x*y);
	}
};

void CRectangle::set_values (int a, int b)
 {
  x = a;
  y = b;
}

void main ()
 {
  CRectangle rect, rectb;
  clrscr();
  rect.set_values (3,4);
  rectb.set_values (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  getch();
}





#include <iostream.h>
#include<conio.h>

class CRectangle
{
	int width, height;
  public:
	CRectangle (int,int);
	int area ()
	{
	  return (width*height);
	}
};

CRectangle::CRectangle (int a, int b)
{
  width = a;
  height = b;
}

void main ()
{
  CRectangle rect (3,4);
  CRectangle rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  getch();
}



#include <iostream.h>
#include<conio.h>

class CRectangle
 {
	int *width, *height;
  public:
	CRectangle (int,int);
	~CRectangle ();
	int area ()
	{
	   return (*width * *height);
	}
};

CRectangle::CRectangle (int a, int b)
{
  width = new int;
  height = new int;
  *width = a;
  *height = b;
}

CRectangle::~CRectangle ()
{
  delete width;
  delete height;
}

void main ()
{
  CRectangle rect (3,4), rectb (5,6);
  clrscr();
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  getch();
}



#include <iostream.h>
#include<conio.h>

class CRectangle
 {
	int width, height;
  public:
	CRectangle ();
	CRectangle (int,int);
	int area (void)
	{
	  return (width*height);
	}
};

CRectangle::CRectangle ()
{
  width = 5;
  height = 5;
}

CRectangle::CRectangle (int a, int b)
 {
  width = a;
  height = b;
}

void main ()
{
  CRectangle rect (3,4);
  CRectangle rectb;
  clrscr();
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  getch();
} */

