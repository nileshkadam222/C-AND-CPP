#include<iostream.h>
#include<conio.h>

  float mul(float x,float y)
   {
    return(x*y);
   }
   double div(double x,double y)
   {
    return(x/y);
   }
  void main()
   {
   clrscr();
   float a=12.233,b=9.85;
   cout<<mul(a,b)<<"\n";
   cout<<div(a,b)<<"\n";
  getch();
}
