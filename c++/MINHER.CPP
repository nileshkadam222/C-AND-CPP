#include"iostream.h"
#include"conio.h"
#include"iomanip.h"
class base_info
{
private:
char name[30];
long int rno;
char sex;
public:
void getdata();
void display();
};
class a_fit
{ private:
char course[30];
char semi[10];
int rank;
public:
void getdata();
void display();
};
class f_assist:private base_info,private a_fit
{
private:
float amount;
public:
void getdata();
void display();

};
void base_info::getdata()
{
cout<<"\nenter name:\n\t rno\n\t: sex:\n\t";
cin>>name>>rno>>sex;
}
void base_info::display()
{
cout<<name<<"   ";
cout<<rno<<"   ";
cout<<sex<<"   " ;
}
void a_fit::getdata()
{
cout<<" course name \n semi\n rank\n";
cin>>course>>semi>>rank;
}
void a_fit::display()
{
cout<<course<<"   ";
cout<<semi<<"   ";
cout<<rank<<"   ";
}
void f_assist::getdata()
{
base_info::getdata();
a_fit::getdata();
cout<<"amount in rs\n";
cin>>amount;
}
void f_assist::display()
{
base_info::display();
a_fit::display();
cout<<setprecision(2);
    cout<<amount<<" ";
    }
    int main()
    {
    f_assist f;
    clrscr();

    cout<<"\n enter  info";
    f.getdata();
    cout<<" NAME   RNO   SEX   COURSE  SEMI   RANK   AMOUNT\n";
    cout<<"\n -------------------------------------------------------------\n";
    f.display();
    getch();
    return 0;
    }





