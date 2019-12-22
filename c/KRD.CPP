//30.05.13

//(1)Basic program:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c=0;
  cout<<"enter 1st no:"<<endl;
  cin>>a;
  cout<<"enter 2nd no:"<<endl;
  cin>>b;
  c=a+b;
  cout<<"The sum is  "<<c;
  getch();
}
*/

//(2)to calculate simple interest:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int p,r,t,i=0;
  clrscr();
  cout<<"Enter the principle amount, rate of interest and the time period: "<<endl;
  cin>>p>>r>>t;
  i=(p*r*t)/100;
  cout<<"Simple interest of the data entered is: "<<i;
  getch();
}
*/

//(3)swapping using temp:

/*
#include<conio.h>
#include<iostream.h>
void main()
{
  int a,b,temp;
  clrscr();
  cout<<"Enter the two nos: "<<endl;
  cin>>a>>b;
  cout<<"The nos Before swapping are "<<endl<<"a= "<<a<<" b= "<<b<<endl;
  temp=a;
  a=b;
  b=temp;
  cout<<"The nos After swapping are "<<endl<<"a= "<<a<<" b= "<<b;
  getch();
}
*/

//(4)to chk if d no is positive , negative or zero:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  cout<<"Enter a no: ";
  cin>>a;
  if(a>0)
  {
	cout<<"The no is positive";
  }
  else if(a<0)
  {
	cout<<"The no is negative";
  }
  else if(a==0)
  {
	cout<<"The no is Zero";
  }
  getch();
}
*/

//(5)Even or odd:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  cout<<"Enter a no: ";
  cin>>a;
  if(a%2==0)
  {
	cout<<"The entered no is even";
  }
  else
  {
	cout<<"The entered no is odd";
  }
  getch();
}
*/

//(6)Greater of 2:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  cout<<"Enter 2 nos: "<<endl;
  cin>>a>>b;
  if(a>b)
  {
	cout<<"a is greater";
  }
  else
  {
	cout<<"b is greater";
  }
  getch();
}
*/

								  //For loop//

//(1)take the upper limit from user nd print ol d nos:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i;
  clrscr();
  cout<<"Enter the upper limit: "<<endl;
  cin>>n;
  for(i=0;i<=n;i++)
  {
	cout<<i<<endl;
  }
  cout<<"The reverse order is: "<<endl;
  for(i=n;i>=0;i--)
  {
	cout<<i<<endl;
  }
  getch();
}
*/

//(2)Factorial:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,f=1;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
	f=f*i;
  }
  cout<<"The factorial of the given no is: "<<f;
  getch();
}
*/

//(3)Table:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i,ans=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  cout<<"The table of given no is: "<<endl;
  for(i=1;i<=10;i++)
  {
	ans=n*i;
	cout<<n<<" * "<<i<<" = "<<ans<<endl;
  }
  getch();
}
*/

							//While nd Do while//

//(1)table using while :

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n,i,ans=0;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  i=1;
  cout<<"The table of entered no is: "<<endl;
  while(i<=10)
  {
	ans=n*i;
	cout<<n<<" * "<<i<<" = "<<ans<<endl;
	i++;
  }
  getch();
}
*/

//(2)factorial using do while:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,f=1;
  clrscr();
  cout<<"Enter a no: "<<endl;
  cin>>n;
  i=1;
  do
  {
	f=f*i;
	i++;
  }while(i<=n);
  cout<<"The factorial of d no is: "<<f;
  getch();
}
*/

//31.05.13

//switch statement:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  cout<<"give an input please: "<<endl;
  cin>>n;
  switch(n)
  {
	case 1:
		cout<<"Monday"<<endl;
		break;
	case 2:
		cout<<"Tuesday"<<endl;
		break;
	case 3:
		cout<<"Wednesday"<<endl;
		break;
	case 4:
		cout<<"Thursday"<<endl;
		break;
	case 5:
		cout<<"Friday"<<endl;
		break;
	case 6:
		cout<<"Saturday"<<endl;
		break;
	case 7:
		cout<<"Sunday"<<endl;
		break;
   default:
   cout<<"Invalid Input"<<endl;
	}
	getch();
}
*/

//1D Arrays:

/*
#include<iostream.h>
#include<conio.h>
void main()
{
  int i,a[5];
  clrscr();
  cout<<"Enter Array Elements: "<<endl;
  for(i=0;i<=5;i++)
  {
	cin>>a[i];
  }
  clrscr();
  cout<<"The Array Elements Are: "<<endl;
  for(i=0;i<=5;i++)
  {
	cout<<a[i]<<endl;
  }
  getch();
}
*/

//2D Arrays:

