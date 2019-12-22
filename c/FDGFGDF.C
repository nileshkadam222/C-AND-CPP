#include<stdio.h>
#include<conio.h>
void main()
{
FILE*fp;
char a[20]="vacation time";
int i;
clrscr();
fp=fopen("sur.txt","w");
for(i=0;i<=3;i++)
{
 fprint(fp," \n %s.line no %d",a,i);
 }
 printf("yupyyyyy data write succesfully\n");
 getch();
}
