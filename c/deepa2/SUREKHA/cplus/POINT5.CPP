#include<iostream.h>
#include<conio.h>
class BC
{
   public:
	  int b;
	  void show()
	  {
		 cout << "b=" << b << "\n";
		 getch();
	  }
};
class DC : public BC
{
	public:
		int d;
		void show()
		{
		   cout << "b=" << b << "\n";
		   cout << "d=" << d << "\n";
		   getch();
	   }
};
void main()
{
   BC *bptr;
   BC base;
   bptr=&base;
   clrscr();
   bptr->b=100;
   cout << "bptr points to base objects:";
   bptr->show();
   DC derived;
   bptr=&derived;
   bptr->b=200;
   cout << "bptr points to derived objects:";
   bptr->show();
   bptr->b=600;
   bptr->show();
   DC *dptr;
   dptr=&derived;
   bptr->b=500;
   dptr->d=300;
   cout << "dptr is derived type pointer:";
   dptr->show();
}
