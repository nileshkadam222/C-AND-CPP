// overloading binary plus operator
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
/*
here only one oject is given as a parameter b'cos when we call the operator
function from main as  op=obj1+obj2. here the obj1 inovkes the function as
in C++ we need an object to invoke a specific function here obj1 works as an
invoking object and obj2 work as a parameter. Hence the values of obj1 are
directly accessible to operator function i.e x and y written without the
obj name are data members of object obj1.
*/

    floats operator+(floats obj2)
    {
     floats op;
     op.x=x+obj2.x;
     op.y=y+obj2.y;
     return op;
    }
      floats operator+(floats obj2)
    {
     floats op;
     op.x=x+obj2.x;
     op.y=y+obj2.y;
     return op;
    }

  };

  int main()
   {
    floats obj1,obj2,obj3;
    obj1.getdata(1.5,2.5);
    obj2.getdata(2.2,1.4);
    clrscr();
    obj1.display();
    obj2.display();

    cout<<"\n\n--------------";
    obj3=obj1+obj2;  //obj1 works as an invoking object and obj2 works as a parameter
    obj3.display();
    getch();
    return 0;
  }