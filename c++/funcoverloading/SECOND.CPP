// overloading unary minus operator using a friend function
//---------------------------------------------------------
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

 friend void operator -(number &nx)
    {
     nx.x=-nx.x;
     nx.y=-nx.y;
     nx.z=-nx.z;
    }
  };

  int main()
   {
    number n;
    n.getdata(10,20,-30);
    n.display();
    clrscr();
    -n;
    cout<<"\n\nAfter calling the operator function '-' the value of object n are  :  \n";
    n.display();
   getch();
   return 0;
  }