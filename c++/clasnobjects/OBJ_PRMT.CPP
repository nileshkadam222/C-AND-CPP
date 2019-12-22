//objects as function arguments
#include<iostream.h>
//#include<stdio.h>
#include<conio.h>
class time
{
	int hr;
	int min;
	int sec;
	public :
	void gettime()
	 {
	  cout<<"\nEnter Hours   :  ";
	  cin>>hr;
	  cout<<"\nEnter Minutes :  ";
	  cin>>min;
	  cout<<"\nEnter Seconds : ";
	  cin>>sec;
	 }
	 void add(time t1,time t2)
	 {
	  time t3;
	  t3.hr=t1.hr+t2.hr;
	  t3.min=t1.min+t2.min;
	  t3.sec=t1.sec+t2.sec;
	 t3.disp();
	 }
	 void disp()
	  {
	   cout<<"\nHr:"<<hr<<" Min:"<<min<<" Sec:"<<sec;
	   }

};

 void main()
{
 time t1,t2,t3;
 clrscr();
 t1.gettime();
 t2.gettime();
 t3.add(t1,t2);
 //t3.disp();
 getch();
 }


