#include<iostream.h>
#include<conio.h>
int volume(int);
double volume(double,int);
long volume(long,int,int);
void main()
{
	clrscr();
	cout << "\n" << volume(10);
	cout << "\n" << volume(2.5,8);
	cout << "\n"<< volume(100l,75,15);
	getch();
}
int volume(int s)
{
   return(s*s*s);
}
double volume(double r,int h)
{


   return(3.14 * r* r*h);
}
long volume(long l,int b,int h)
{
   return(l *b*h);
}