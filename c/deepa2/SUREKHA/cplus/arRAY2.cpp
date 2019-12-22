#include<iostream.h>
#include<conio.h>
void main()
{
 int i,j,k,a[10];
 int e[10],o[10];
 clrscr();
 for(i=0;i<10;i++)
 {
	 cout << "\nenter a number:";
	 cin >> a[i];
  }
  for(i=0;i<10;i++)
  {
	 cout << "\nthese are the values:" << a[i];
	 getch();
  }
  k=j=0;
  for(i=0;i<10;i++)
  {
	 if(a[i]%2==0)
	 {
		  e[j]=a[i];
		  j++;
		  getch();
	  }
	  else
	  {
		 o[k]=a[i];
		 k++;
		 getch();
	  }
   }

   for(i=0;i<j;i++)
   {

	  cout << "\nthe even numbers are: " << e[i];
	  getch();
   }
   for(i=0;i<k;i++)
   {
	  cout << "\nthe odd numbers are: " << o[i];
	  getch();
   }


}


