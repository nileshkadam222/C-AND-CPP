#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,c,a;
clrscr();
for(i=1;i<=5;i++)
{
for(c=65;c<=(70-i);c++)

printf("%c",c);

for(j=1;j<(2*i-1);j++)

printf(" ");

for(k=70-i;k>=65;k--)
{
printf("%c",k);

}
printf("\n");
 }
getch();
}
