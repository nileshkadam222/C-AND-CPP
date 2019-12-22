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
  //OVERLOADED OPERATORS
    time operator+(time t1);
    time  operator++();
    int operator>(time);
   };
 //FUNCTION DEFINITION
   time  time::operator++()
     {
      time temp;
      temp.hr=hr;
      temp.min+min;
      temp.sec=sec;
      hr++;
      min++;
      sec++;
      return temp;
    }
  time time::operator+(time t1)
    {
     time temp;
     temp.hr = t1.hr +hr;
     temp.min= t1.min+min;
     temp.sec = t1.sec +sec;
     return temp;
   }

 int time::operator>(time t1)
  {
   if(hr>t1.hr)
    return 1;
   if(min>t1.min)
    return 1;
   if(sec>t1.sec)
     return 1;
    return 0;
  }

  main()
  {
    time t1(3,5,8);
    time t2(3,7,9);
    time t3;
    time t4;
    t3=t1+t2;               //t1.+(t2)
    t3++;

    clrscr();
    t3.print();

    if(t1>t2)
      cout<<"T1 is greater ";
    else
      cout<<"t2 is greater ";
    getch();
    return 0;
 }