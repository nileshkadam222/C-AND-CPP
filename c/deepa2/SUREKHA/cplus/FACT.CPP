#include<iostream.h>
#include<conio.h>
void main()
{
  int fact ;
  int i,num;
  int n;
  clrscr();
  cout<<"enter the number:";
  cin>>num;
  n=num;
  for(i=n;i<0;i--)
  {
	fact=fact*num;
	num=num-1;
  }
  cout<<"factorial is:"<<fact;
  getch();
}