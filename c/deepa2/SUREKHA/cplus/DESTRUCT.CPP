#include<iostream.h>
#include<conio.h>
int count=0;

class alpha
{

public:
alpha()
{
count++;
cout<<"no. of object created"<<count;
}
~alpha()
{
cout<<"\nbye bye ..!!!"<<count;
getch();
}
};
void main()
{
alpha a;
clrscr();
cout << "destructor executing:";
getch();
}


