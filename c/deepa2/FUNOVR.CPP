/*
#include<iostream.h>
#include<conio.h>
int volume(int a);
double volume(double a, int b);
long volume(long a, int b, int c);
void main()
{    clrscr();
	cout<<volume(10)<<endl;
	cout<<volume(2.5,8)<<endl;
	cout<<volume(100,75,15)<<endl;
	getch();
}

// volume of a cube
int volume(int s)
{
	return(s*s*s);
}

// volume of a cylinder
double volume(double r,int h)
{
	return(3.14*r*r*h);
}

// volume of a cuboid
long volume(long l,int b,int h)
{
	return(l*b*h);
}
//===================================

#include <iostream.h>
#include<conio.h>
long add(long, long);
float add(float, float);

void main()
{
clrscr();
   long a, b, x;
   float c, d, y;

   cout << "Enter two integers\n";
   cin >> a >> b;

   x = add(a, b);

   cout << "Sum of integers: " << x << endl;

   cout << "Enter two floating point numbers\n";
   cin >> c >> d;

   y = add(c,d);

   cout << "Sum of floats: " << y << endl;

  getch();

}

long add(long x, long y)
{
   long sum;

   sum = x + y;

   return (sum);
}

float add(float x, float y)
{
   float sum1;

   sum1 = x + y;

   return (sum1);
}
 //==========================================


#include<iostream.h>
#include<conio.h>
void display(char []);  // print the string passed as argument
void display(char [], char []);

void main()
{   clrscr();
   char first[] = "C programming";
   char second[] = "C++ programming";

   display(first);
   display(first, second);


   getch();
}

void display(char s[])
{
   cout << s << endl;
}

void display(char s[], char t[])
{
   cout << s << endl << t << endl;
}
//=====================================
 */
#include <iostream.h>
#include<conio.h>

void print(int i)
{
  cout << " Here is int " << i << endl;
}
void print(double  f)
{
  cout << " Here is float " << f << endl;
}

void print(char* c)
{
  cout << " Here is char* " << c << endl;
}

void main()
{
  clrscr();
  print(10);
  print(10.10);
  print("ten");
  getch();
}

