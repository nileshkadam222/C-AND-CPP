#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class time
{
	int hr;
	int min;
	int sec;
	public :
	friend class sample;


};

class sample
{
  public :

void print(time t)
 {
   cout<<t.hr<<":"<<t.min<<":"<<t.sec;
  }
};

void main()
{
	  sample  sam;
	  time t;
	  sam.print(t);
	 // return 1;
	  getch();
}
