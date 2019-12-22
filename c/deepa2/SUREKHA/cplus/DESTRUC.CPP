#include<iostream.h>
#include<conio.h>
int count=0;
class alpha
{
   public:
	 alpha()
	 {
		count++;
		cout<<"\nno. of object created"<<count;
	 }
	 ~alpha()
	 {
		cout<<"\nno. of object destroyed"<<count;
		count--;
		getch();
	 }
};
void main()
{
   clrscr();
   alpha A1;
   alpha a2;


   getch();
}