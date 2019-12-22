/* multiple inheritance class result is derived from two
   base classes marks and sports. */
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class marks  //base class marks
{
  protected:  //if protected the data members can be accessed directly...
	      //...or thru member function of derived class
  int m1,m2,m3;
  public:
   void get()
    {
     cout<<"Enter marks in 3 sub :";
     cin>>m1>>m2>>m3;
    }
    void print()
     {
      cout<<"\nm1="<<m1<<"\nm2="<<m2<<"\nm3="<<m3;
      }
  };

 class sports
  {
    protected:
      int add_marks;
    public:
     void get()
      {
       cout<<"Enter additional marks";
       cin>>add_marks;
      }
     void print()
      {
       cout<<"\n add_marks="<<add_marks;
      }
    };

  class result : public marks,public sports
   {
     float per;
      public:
	void print()
	 {
	  marks::print();
	  sports::print();
	 cout<<"\nThe Percentage is  :  "<<per;

	 }
	void get()
	 {
	   marks::get();
	   sports::get();
	   per=(m1+m2+m3+add_marks)/4.0;  //m1,m2,m3 are protected hence accessed in derived class

	  }
    };

 main()
   {
     result r;
     clrscr();
     r.get();
     r.print();
   }