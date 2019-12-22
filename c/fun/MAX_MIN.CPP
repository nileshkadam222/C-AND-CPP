#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int max(int x,int y,int z);
int min(int p,int q,int r);
clrscr();
printf("enter any three no =");
scanf("%d%d%d",&a,&b,&c);
max(a,b,c);
min(a,b,c);
getch();
}
int max(int x,int y,int z)
{
int big,small;
if(x>y)
{
if(y>z)
big=x;
else
big=y;
}
else
if(z>big)
{
big=z ;
}

printf("maximum =%d\n",big)   ;


return big;
}
int min(int p,int q,int r)
{
int small;
if (p<q)
{
if(p<r)
small=p ;
else
small=r;
}
else if(q<small)
{
small=q;
}
printf("smallest =%d\n",small);
return small;
}