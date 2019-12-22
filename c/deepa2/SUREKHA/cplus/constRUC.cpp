#include<iostream.h>
#include<conio.h>
class integer
{
   int m,n;
   public:
	 integer(int,int);
	 void display()
	 {
		cout << "m=" << m << "\n";
		cout << "n=" << n << "\n";
	 }
};
integer :: integer(int x,int y)
{
   m=x;
   n=y;
}
void main()
{
  integer int1(0,100);
  clrscr();
  integer int2=integer(25,75);
  cout << "\n object1 " << "\n";
  int1.display();
  cout << "\nobject2:" << "\n";
  int2.display();
  getch();
}
