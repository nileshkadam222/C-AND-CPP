#include<iostream.h>
#include<conio.h>
class math
{
 private:
 float a,b,c;

 public:

 void getdata()
  {
   cout<<"Enter two numbers: ";
  cin>>a>>b;
  }
 int sum()
  {
  c=a+b;
  return(c);
 }

 int sub()
 {

 c=a-b;
 return(c);
 }

 float div()
 {
  c=a/b;
  return(c);
 }
  int mul()
 {
  c=a*b;
  return(c);
 }
};

 void main()
 {
  math r;
  float a,b,c,d;
  clrscr();
  r.getdata();
  a=r.sum();
  b=r.sub();
  c=r.mul();
  d=r.div();

  cout<<"Add: "<<a<<endl<<"Sub: "<<b<<endl<<"Mul: "<<c<<endl<<"Div: "<<d<<endl;
  getch();
 }


