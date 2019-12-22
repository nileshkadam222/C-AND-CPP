
/*
#include<iostream.h>
#include<conio.h>
class test
{
  private:
  int a,b;

  public:
	test()
	{
	  cout<<"Enter the value: "<<endl;
	  cin>>a;
	  cout<<"Enter another value: "<<endl;
	  cin>>b;

	}
friend int compute(test t);
};

int compute(test t)
{
  int ans=0;
  ans=((t.a+t.b)-5);
  cout<<"The result is: "<<ans<<endl;
  return(0);
}

void main()
{
   test t1;
   clrscr();
   compute(t1);
   getch();
}  */


#include<iostream.h>

#include<conio.h>

class test
{
	private:
	int a;
	friend int cube(test t);

	public:
	test()
	{
	  cout<<"Enter the value: "<<endl;
	  cin>>a;
}


};

int cube(test t)
{
   return(t.a*t.a*t.a);
}

void main()
{
   test t1;
   int n;
   clrscr();
   n=cube(t1);
   cout<<"The cube of number is: "<<n;
   getch();
}