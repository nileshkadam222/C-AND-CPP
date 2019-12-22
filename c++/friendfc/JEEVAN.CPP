/*
#include<iostream.h>
#include<conio.h>
class test
{
private:
int a,b;
public:
test()
{
a=100;
b=200;
}
friend int compute(test t);
};
int compute(test t)
{
int ans=0;
ans=((t.a+t.b)-5);
cout<<"the result is:"<<ans<<endl;
return 0;
}
void main()
{
test t1;
clrscr();
compute(t1);
getch();
}
*/
#include<iostream.h>
#include<conio.h>
class test
{
private:
int a;
public:
test()
{
clrscr();
cout<<"enter a value"<<endl;
cin>>a;
}
friend int cube(test t );
};
int cube(test t)
{
return(t.a*t.a*t.a);
}
void main()
{
test t1;
clrscr();
cout<<"the cube of number is "<<cube(t1);
getch();
}