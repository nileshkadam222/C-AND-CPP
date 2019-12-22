#include<iostream.h>
#include<conio.h>
void main()
{
   int i,mul=1;
   int a[5];
   clrscr();
   for(i=0;i<5;i++)
   {
	   cout << "\n enter a number:";
	   cin>>a[i];
   }
   //for displaying the values of array
   for(i=0;i<5;i++)
   {
	  cout << "\nthe values are:" << a[i];
	  getch();
	}
	for(i=0;i<5;i++)
	{
	   mul=mul * a[i];
	}
	cout << "\n the product of all numbers :" << mul;
	getch();

}
