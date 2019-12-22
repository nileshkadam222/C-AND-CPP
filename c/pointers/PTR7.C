#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y;
  x=100;
  y=200;
  clrscr();
  printf("before exchange:x=%d y=%d\n\n",x,y);
  exchange(&x,&y);
  printf("after exchange:x=%d y=%d\n\n",x,y);
  getch();
}
exchange(a,b)
int *a,*b;
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
  getch();
}