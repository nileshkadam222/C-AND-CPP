#include<iostream.h>
#include<conio.h>
class base
{
	public:
	  void display()
	 {
		 cout << "\n display base:";
		 getch();
	 }
	 virtual void show()
	 {
		 cout << "\n show base:";
		 getch();
	 }
	 };
	 class derived :public base
	 {
		 public:
			void display()
			{
				 cout << "\n display derived" ;
				 getch();
			}
			void show()
			{
				cout << "\n show derived:";
				getch();
			}
	  };
	  void main()
	  {
		  base b;
		  derived d;
		  base *bptr;
		  clrscr();
		  cout << "\n bptr points to base:";
		  bptr=&b;
		  bptr->display();
		  bptr->show();
		  cout << "bptr points to derived:";
		  bptr=&d;
		  bptr->display();
		  bptr->show();
	  }
