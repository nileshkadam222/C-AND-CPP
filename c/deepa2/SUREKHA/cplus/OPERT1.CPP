#include<iostream.h>
#include<conio.h>
class complex
{
float x,y;
public:
complex()
{
}
complex(float a,float b)
{
x=a;
y=b;
}
complex operator+(complex);
void display();
};
complex complex :: operator+(complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return(temp);
}
void complex::display()
{
cout<<x<<" " << y;
}
void main()
{
complex c1,c2,c3;
clrscr();
c1=complex(1.5,2.5);
c2=complex(2.5,3.5);
c3=c1+c2;
cout<<"\nc1=";
c1.display();
cout<<"\nc2=";
c2.display();
cout<<"\nc3=";
c3.display();
getch();
}