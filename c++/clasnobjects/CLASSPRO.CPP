/*
#include<iostream.h>

#include<conio.h>

class test
{
   private:
	  int a;

   public:
	  void ivalue()
	  {
		 cout << "Enter an integer\n";
		 cin >> a;
	  }

	  void ovalue()
	  {
		 cout << "Variable entered is ";
		 cout << a << "\n";
	  }
};

void main()
{
 test t;

   t.ivalue();
   t.ovalue();
   getch();
}





#include <iostream.h>
#include <conio.h>

class Rect
{

private:

	int s1, s2;

public:


	Rect()
		{
		s1 = 1;
		s2 = 1;
	}


	Rect(int a, int b)
		{
		s1 = a;
		s2 = b;
	}


	int Area(int s1, int s2)
	{
		return(s1*s2);
	}

	int Perimeter(int s1, int s2)
	{
		return(2*s1 + 2*s2);
	}
};

void main()
{

	Rect r(3,5);

	cout << "Area of sides 3, 5 is: "<< r.Area(3,5) <<  endl;

	cout << "Perimeter of sides 3, 5 is: "<< r.Perimeter(3,5) << endl;

	getch();
}





#include <iostream.h>
#include<conio.h>

class Rect
{

private:

	int s1, s2;

public:

		Rect()
		  {
		s1 = 1;
		s2 = 1;
	   }


	Rect(int a, int b)
	{
		s1 = a;
		s2 = b;
	}

		//accessors:
		int getS1()
		{
		  return s1;
		  }
		int getS2()
		{
		 return s2;
		 }


	int Area(int s1, int s2)
	{
		return(s1*s2);
	}

	int Perimeter(int s1, int s2)
	{
		return(2*s1 + 2*s2);
	}
};

void main()
{

	Rect r(3,5);

	int s1 = r.getS1();
	int s2 = r.getS2();

	cout << "Area of sides 3, 5 is: "<< r.Area(s1,s2) <<  endl;

	cout << "Perimeter of sides 3, 5 is: "<< r.Perimeter(s1,s2) << endl;

	getch();
}


   */