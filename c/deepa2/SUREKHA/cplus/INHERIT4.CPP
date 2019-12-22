#include<iostream.h>
#include<conio.h>
class M
{
   protected:
		int m;
	public:
	  void get_m(int);
};
class N
{
   protected:
	   int n;
   public:
		  void get_n(int);
};
class P : public M,public N
{
   public:
	  void display();
};
void M :: get_m(int x)
{
   m=x;
}
void N :: get_n(int y)
{
   n=y;
}
void P :: display()
{
   cout << "\nm=" << m;
   cout << "\nn:=" << n;
   cout << "\nm*n=" << m*n << "\n";
   getch();
}
void main()
{
   P p;
   clrscr();
   p.get_m(10);
   p.get_n(20);
   p.display();
}