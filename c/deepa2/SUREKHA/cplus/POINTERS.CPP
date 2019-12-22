#include<iostream.h>
#include<conio.h>
class BC
{
public:
int b;
void show()
{
cout<<"\nB="<<b;
}
};
class DC:public BC
{
public:
int d;
void show()
{
cout<<"\nB="<<b;
cout<<"\nD="<<d;
}
};
void main()
{

BC *bptr;
BC base;
clrscr();
bptr=&base;
bptr->b=100;
cout<<"\nbptr points to base objects";
bptr->show();
DC de;
bptr=&de;
bptr->b=200;
cout<<"\nbptr nw points out derived objects";
bptr->show();
DC *dptr;
dptr=&de;
dptr->d=300;
cout<<"\nbptr is derived type pointer ";
dptr->show();
cout<<"\nusing((DC *)bptr)";
((DC *)bptr)->d=400;
((DC *)bptr)->show();

getch();
}