#include<iostream.h>
#include<conio.h>
class item
{
int num;
float cost;
public:
void getdata(int,float);
void display();
};
void item::getdata(int a,float b)
{
  num=a;
  cost=b;
}
void item::display()
{
cout<<"\nnum:"<<num;
cout<<"\ncost:"<<cost;

}
void main()
{
item x;
clrscr();
x.getdata(12,45.9);
x.display();
item y;
cout<<"\nobject2"<<"\n";
y.getdata(13,78.5);
y.display();
getch();
}
