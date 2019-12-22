#include<iostream.h>
#include<conio.h>
class comp_info
{
char name[50];
char address[50];
char location[50];
public:
void getdata();
void display();
};
class emp_bio:public comp_info
{
private:
char ename[50];
int  idno;
public:
void getdata();
void display();
};
void comp_info::getdata()
{
cout<<"enter the company name:";
cin>>name;
cout<<"enter the company address:";
cin>>address;
cout<<"enter the location:";
cin>>location;
}
void comp_info::display()
{
cout<<name<<"\t\t";
cout<<address<<"\t\t";
cout<<location<<"\t\t";
}
void emp_bio::getdata()
{
comp_info::getdata();
cout<<"enter the name of the employe-";
cin>>ename;
cout<<"enter the idno-";
cin>>idno;
}
void emp_bio::display()
{
comp_info::display();
cout<<ename<<"\t\t";
cout<<idno<<"\t\t";
}
void main()
{
clrscr();

emp_bio a;
cout<<"enter the following info:\n";
a.getdata();
cout<<"...........................................\n";
cout<<"comp name \taddress \tlocation \tename \tidno\n";
cout<<"............................................\n";
a.display();
cout<<endl;
cout<<"...........................................\n";
getch();
}
