#include<stdio.h>
#include<conio.h>
void main()
{
int u=3,v;
int *pu,*pv;
pu=&u;
pv=&v;
v=*pu;
clrscr();
printf("\n u=%d &u=%x pu=%x *pu=%d",u,&u,pu,*pu);
printf("\n v=%d &v=%x pv=%x *pv=%d",v,&v,pv,*pv);
getch();
}