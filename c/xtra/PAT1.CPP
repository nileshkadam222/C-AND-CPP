/*
1
12
123
1234
12345

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	cout<<"Enter the number of lines"<<endl;
	cin>>n;
	cout<<"\n\n";
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)
	   {
		  cout<<j;
	   }
	   cout<<endl;
	}
	getch();
}

	 12345
	 1234
	 123
	 12
	 1

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,n,t;
	clrscr();
	cout<<"Enter the number of lines"<<endl;
	cin>>n;
	cout<<"\n\n";
	t=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=t;j++)
		{
		  cout<<j;
		}
		cout<<endl;
		t--;
	}
	getch();
}



	 1
	21
   321
  4321
 54321


#include<iostream.h>
#include<conio.h>
void main()
{
	int r,c,n,t,k;
	clrscr();
	cout<<"Enter the number of lines"<<endl;
	cin>>n;
	t=n;
	for(r=1;r<=n;r++)
	{
	for(c=1;c<=t-1;c++)
	   {
		 cout<<" ";
	   }
	   t--;
	   for(k=1;k<=r;k++)
	   {
		 cout<<k;
	   }
	   cout<<endl;
	}
	getch();
}




 12345
  1234
   123
	12
	 1


#include<iostream.h>
#include<conio.h>
void main()
{
	int r,c,n,t,k;
	clrscr();
	cout<<"Enter the number of lines";
	cin>>n;
	t=n;
	for(r=1;r<=n;r++)
	{
	   for(c=1;c<r;c++)
	   {
		cout<<" ";
	   }

	   for(k=1;k<=t;k++)
	   {
		 cout<<k;
	   }
	   t--;
	   cout<<endl;
	}
	getch();
}


	*
   ***
  *****
 *******
*********


#include<stdio.h>
#include<conio.h>
void main()
{
	int c,n,t,k,i;
	clrscr();
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	t=n;
	for(i=1;i<=n;i++)
	{
	   for(c=1;c<=t-1;c++)
	   {
		  printf(" ");
	   }
	   t--;
	   for(k=1;k<=2*i-1;k++)
	   {
		 printf("*");
	   }
	   printf("\n");
	}
	getch();
}


*********
 *******
  *****
   ***
	*


#include<iostream.h>
#include<conio.h>
void main()
{
	int c,n,t,k,r;
	clrscr();
	cout<<"Enter the number of lines";
	cin>>n;
	cout<<"\n\n";
	t=n;
	for(r=1;r<=n;r++)
	{
	 for(c=1;c<r;c++)
	   {
		 cout<<" ";
	   }
	 for(k=1;k<=2*t-1;k++)
	 {
		cout<<"*";
	 }
	 t--;
	 cout<<endl;
	 }
	 getch();
	}
				 */
