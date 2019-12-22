#include<stdio.h>
#include<conio.h>
void main()
{
int i;
i=2;
clrscr();
do
{
printf("no. is even%d",i);
i++;
}
while(i%2==0);

do
{
printf("no. is odd%d",i);
i++;
}
while(i%2!=0);

getch();
}


