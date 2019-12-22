#include<iostream.h>
#include<conio.h>
class stud
{
private:
int no;
char name[50];
public:
void get();
void print();
};
void stud::get()
{
cout<<"enter the number:";
cin>>no;
cout<<"enter the name:";
cin>>name;
}
void stud::print()
{
cout<<"number :"<<no<<"\n name:"<<name;
}
class phy_info:public stud
{
float h;
float w;
public:
void get()
{
stud::get();
cout<<"\n\n enter Height & Weight: ";
cin>>h>>w;
}
void print()
{
stud::print();

cout<<"\n Height:"<<h<<"Weight:"<<w;
}
};
void main()
{
phy_info s1;
clrscr();
s1.get();
clrscr();
s1.print();
getch();
}



