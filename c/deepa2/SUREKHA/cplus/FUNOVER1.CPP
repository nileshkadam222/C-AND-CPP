#include<iostream.h>
#include<conio.h>
class addition
{
   int a,b,c;
   public:
	 void add();
	 void add(int,int);
	 void add(float,float);
};
void addition :: add()
{
	cout << "enter a number:";
	cin >> a;
	cout << "enter another:";
	cin >> b;
	c=a+b;
	cout << "sum is : " << c;
	getch();
}
void addition :: add(int m,int n)
{
	 c=m + n;
	 cout << "sum is :" << c;
	 getch();
}
void addition :: add(float m,float n)
{
	c=m + n;
	cout << "sum is (flaot)" << c;
	getch();
}


void main()
{
   addition ad;
   clrscr();
   ad.add();
   ad.add(8,2);

   getch();
}
