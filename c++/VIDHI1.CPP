#include<iostream.h>
#include<conio.h>
class basic_info
{
private:
char name[20];
long int rollno;
char sex;
public:
void getdata();
void display();
};
class physical_fit:public basic_info
{
private:
float height ;
float weight;
public:
void getdata();
void display();
};
void basic_info::getdata()
{
cout<<"enter a name:\n";
cin>>name;
cout<<"enter the rollno:\n";
cin>>rollno;
cout<<"enter the sex:\n";
cin>>sex;
}
void basic_info::display()
{
cout<<name<<"\t";
cout<<rollno<<"\t ";
cout<<sex<<"\t ";
}
void physical_fit::getdata()
{
basic_info::getdata();
cout<<"enter the height:\n" ;
cin>>height;
cout<<"enter the weight:\n";
cin>>weight;
}
void physical_fit::display()
{
basic_info::display();
cout<<height<<"\t";
cout<<weight<<"\t ";
}
void main()
{
clrscr();
physical_fit a;
cout<<"enter the following info\n";
a.getdata();
cout<<"\n########################################\n";
cout<<"\n name\trollno\tsex\theight\tweight \n";
cout<<"\n#######################################\n";
a.display();
cout<<endl;cout<<"\n****************************************\n";
getch();
}

