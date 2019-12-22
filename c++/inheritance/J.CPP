#include<iostream.h>
#include<conio.h>
class stud
{
  private:
  int no;
  char name[20];
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
cout<<"\n number:"<<no<<"\n name:"<<name;
}
class marks:public stud
{
protected:
int m1,m2,m3;
public:
   void get()
{
cout<<"enter marks for m1,m2,m3:";
cin>>m1>>m2>>m3;
}
void print()
{
cout<<"\nm1="<<m1<<"\nm2="<<m2<<"\nm3="<<m3;
}
};
class result: public marks
{
float per;
public:
void get()
{
stud::get();
marks::get();
per=(m1+m2+m3)/3.0;
}
void print()
{
stud::print();
marks::print();
cout<<"\n percentage="<<per;
}
};
void main()
{
result s1;
clrscr();
s1.get();
clrscr();
s1.print();
getch();
}
