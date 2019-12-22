#include"iostream.h"
#include"conio.h"
#include"iomanip.h"

class base_info
{
private:
char name[20];
long int rno;
char sex;
public:
void getdata();
void display();
};
class phy_fit: public base_info
{
private:
float w,h;
public:
void getdata();
void display();
};
void base_info::getdata()
{
cout<<" enter name:\n rno:\nsex : ";
cin>>name>>rno>>sex;
}
void base_info::display()
{
cout<<name<<" ";
cout<<rno<<" ";
cout<<sex<<" ";
}
void phy_fit::getdata()
{
base_info::getdata();
cout<<  "enter h\n w\n";
cin>>h>>w;
}
void phy_fit::display()
{
base_info::display();
cout<<setprecision(2);
cout<<h<<" ";
cout<<w<<" ";
 }
int main()
{
 phy_fit a;
 cout<<"enter info:";
 a.getdata();
 a.display();
 getch();
 return 0;
 }
