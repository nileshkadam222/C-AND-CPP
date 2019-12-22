 // overloading unary minus operator.
//---------------------------------
#include<iostream.h>
#include<conio.h>

class number
  {
   int x;
   int y;
   int z;

   public :
    void getdata(int a,int b,int c)
     {
      x=a;
      y=b;
      z=c;
     }

    void display()
     {
      cout<<endl<<x<<"   "<<y<<"   "<<z;
     }
   void operator -()
    {
     x=-x;
     y=-y;
     z=-z;
    }
  };

  int main()
   {
    number n;
    clrscr();
    n.getdata(10,20,-30);
    n.display();
    -n;
    cout<<"\n\nAfter calling the operator function '-' the value of object n are  :  \n";
    n.display();
   getch();
   return 0;
  }