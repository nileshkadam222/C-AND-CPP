#include<iostream.h>
#include<conio.h>
class item
{
   int number;
   float cost;
   public:
	 void getdata(int a,float b);
	 void display()
	 {
	   cout << "number : " << number << "\n";
	   cout << "cost : " << cost << "\n";
	 }
};
void item :: getdata(int a,float b)
{
   number=a;
   cost=b;
}
void main()
{
   item x;
   clrscr();
   x.getdata(100,299.89);
   x.display();
   item y;
   cout << "\object 2:" << "\n";
   y.getdata(200,175.50);
   y.display();
   getch();
}


