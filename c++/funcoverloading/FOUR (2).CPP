// overloading binary plus operatorusing a friend function
//----------------------------------
#include<iostream.h>
#include<conio.h>

class floats
  {
   float x;
   float y;

   public :

    void getdata(float a,float b)
     {
      x=a;
      y=b;
     }

    void display()
     {
       cout<<endl<<x<<"   "<<y;
     }

    friend floats operator+(floats obj1,floats obj2)
    {
     floats op;
     op.x=obj1.x+obj2.x;
     op.y=obj1.y+obj2.y;
     return op;
    }
  };

  int main()
   {
    floats obj1,obj2,obj3;
    obj1.getdata(1.5,2.5);
    obj2.getdata(2.2,1.4);
    clrscr();
    obj3=obj1+obj2;  //obj1 works as an invoking object and obj2 works as a parameter
    obj3.display();
    getch();
    return 0;
  }