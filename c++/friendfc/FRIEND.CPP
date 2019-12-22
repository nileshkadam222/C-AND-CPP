#include<iostream.h>
#include<conio.h>
class complex
{
float x,y;
public:
complex()
{
}
complex(float a)
{
x=y=a;
}
complex(float real,float img)
{
x=real;
y=img;
}
friend complex sum(complex,complex);
friend void show(complex);
};
complex sum(complex c1,complex c2)
{
complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return c3;
}
void show(complex c)
{
cout<<c.x<<"+"<<c.y<<"i"<<endl;
}
int main()
{
complex a(2.5,5.6);
complex b(1.6);
complex c;
c=sum(a,b);
clrscr();
cout<<"a=";show(a);
cout<<"b=";show(b);
cout<<"c=";show(c);
getch();
return 0;
}