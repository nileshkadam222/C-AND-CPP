  /*

#include <iostream.h>
#include<conio.h>

template <class T>
T GetMax (T a, T b)
 {
	T c;
	if(a>b)
	{
	   c=a;
	}
	else
	{
	   c=b;
	}
	return(c);
}

void main ()
{
  int i=5, j=6, k;
  long l=10, m=5, n;
  k=GetMax(i,j);
  n=GetMax(l,m);
  cout << k << endl;
  cout << n << endl;
  getch();
}

		/*

*/

#include<iostream.h>
#include<conio.h>

template<class t>

t swap(t &x,t &y)
{
   t temp;
   temp=x;
   x=y;
   y=temp;
   return(0);
}

void fun(int a,int b,float c,float d)
{
   cout<<"\na and b before swaping :"<<a<<"\t"<<b;
   swap(a,b);
   cout<<"\na and b after swaping  :"<<a<<"\t"<<b;
   cout<<"\n\nc and d before swaping :"<<c<<"\t"<<d;
   swap(c,d);
   cout<<"\nc and d after swaping  :"<<c<<"\t"<<d;
}

void main()
{
	int a,b;
	float c,d;
	clrscr();
	cout<<"Enter A,B values(integer):";
	cin>>a>>b;
	cout<<"Enter C,D values(float):";
	cin>>c>>d;
	fun(a,b,c,d);
	getch();
}

