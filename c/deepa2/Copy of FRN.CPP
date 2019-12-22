/*
#include <iostream.h>
#include<conio.h>
class test
{
private:
		int a,b;
public:
		 test()
		{
				a=100;
				b=200;
		}

		friend int compute(test t);

};

int compute(test t)
{
//Friend Function Definition which has access to private data
		return((t.a+t.b)-5);
}

void main()
{
		test t1;
	   //	t1.compute();
		clrscr();
		cout << "The result is:" <<compute(t1);
		getch();

}



#include<iostream.h>
#include<conio.h>
class test
{
	private:
	int a;
	public:
		   test()
		   {
			  clrscr();
			  cout<<"Enter a value"<<endl;
			  cin>>a;
		   }
	friend int cube(test t);
};

int cube(test t)
{
   return(t.a*t.a*t.a);
}
void main()
{
   test t1;
   clrscr();
   cout<<"The cube of number is "<<cube(t1);
   getch();
}        */


