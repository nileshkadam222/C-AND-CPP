//loadingbinary operator + using a freind function.

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class time
{
	int hr;
	int min;
	int sec;
	public :
	time()
	{
		hr=0;
		min=0;
		sec=0;
	}
	time(int m,int n,int p)
	{
		hr=m;
		min=n;
		sec=p;
	}
	time(time &t)
	{

		hr=t.hr;
		min=t.min;
		sec=t.sec;
	}
	~time()
	{
	}
	void print()
	{
		cout<<hr<<":"<<min<<":"<<sec;
	}
	friend time add(time t1,time t2);
};

time operator+(time t1,time t2)
{
	time temp;
	temp.hr = t1.hr +t2 .hr;
	temp.min= t1.min+t2 .min;
	temp.sec = t1.sec +t2 .sec;
	      f
	return temp;
}
main()
{
	time t1(3,5,8);
       time t2(3,7,9);
       time t3;
       t3=add(t1,t2);

	clrscr();
	t3.print();
	getch();
	return 0;
}