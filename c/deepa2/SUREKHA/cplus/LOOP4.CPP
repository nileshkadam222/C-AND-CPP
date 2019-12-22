#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,ectr=0,octr=0;
  clrscr();
  for(i=0;i<10;i++)
  {
	cout<<"enter the numbers:";
	cin>>n;
	if(n%2==0)
	{
	  cout<<"even:";
	  getch();
	  ectr=ectr+1;
	}
	else
	{
	  cout<<"odd:";
	  getch();
	  octr=octr+1;
	}
	}
	cout<<"no of even numbers:"<<ectr;
	cout<<"no of odd numbers:"<<octr;
	getch();
}