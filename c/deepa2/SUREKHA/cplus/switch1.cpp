#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   int b;
   int c;
   int ans;
   clrscr();
   cout << "enter a and b:";
   cin>> a >>b;
   cout << "\nMAIN MENU::";
   cout<< "\n1.Addition";
   cout <<"\n2.subtraction:";
   cout <<"\n3.multiplicatication:";
   cout <<"\n4.division:";
   cout<< "\nenter ur choice(1/2/3/4:)";
   cin>> ans;


   switch(ans)
   {
	  case 1:  c= a+b;
			   cout << "sum is :"<<c;
			   getch();
			   break;
	  case 2: if(a>b)
			  {
				  c=a-b;
				  cout << "value after subtraction is :" << c;
				  getch();
			   }
			   else
			   {
				  c=b-a;
				  cout << "value is:"<< c;
				  getch();
			   }
			   break;
	  case 3: c=a*b;
			  cout << "product is:" << c;
			   getch();
			   break;
	  case 4: c=a/b;
			  cout << "value is :" << c;

			   getch();
			   break;
	  default : cout  << "invalid choice:";
			   getch();
			   break;
			   }
  }


