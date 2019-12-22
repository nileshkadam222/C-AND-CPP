//USE OF  CONSTRUCTOR & DESTRUCTOR, COPY CONSTRUCTOR AND FRIEND FUNCTION

#include <iostream.h>
#include <conio.h>

 class time
 {
  int hr;
  int min;
  int sec;

  public :

  time() //EMPTY CONSTRUCTOR
    {
     hr=0;
     min=0;
     sec=0;
    }

   time(int m,int n,int p)   //CONSTRUCTOR WITH PARAMETERS
    {
     hr=m;
     min=n;
     sec=p;
    }

   time(time &t)  //COPY CONSTRUCTOR
    {
     hr=t.hr;
     min=t.min;
     sec=t.sec;
    }

   ~time()  //DESTRUCTOR
     {

     }

    void print()
     {
      cout<<hr<<":"<<min<<":"<<sec;
      }

      friend time add(time t1,time t2); //FRIEND FUNCTION
  };
/*generally a member function can only access pvt data members of a class.
but there may a situtation arise where an outside function can access
the data members. this can be achieved by declaring a fucntion as
friend function. FF is a function which can access private member of all the
classes where it is defined as a friend .
//objects as a parameter.
//---------------------
*/
  time add(time t1,time t2)  //FUNCTION DECLARED OUTSIDE THE CLASS
  {
    time temp;
    temp.hr = t1.hr +t2 .hr;
    temp.min= t1.min+t2 .min;
    temp.sec = t1.sec +t2 .sec;
    return temp;
  }

  main()
   {
 time t3,t4;
     time t1(3,5,8);
    time t2(3,7,9);

     t4=time(t1); //copy constructor.
    t3=add(t1,t2);
    t3=t2;
    // time temp=t1; //calling copy constructor
     clrscr();
     t4.print();
     t3.print();
//     temp.print();
     getch();
     return 0;
  }