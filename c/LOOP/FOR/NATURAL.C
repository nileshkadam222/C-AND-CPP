#include<stdio.h>
#include<conio.h>
void main()
{
int n,i, sum=0;
clrscr();
printf("Enter the value of n :");
scanf("%d",&n);
printf("\nFirst %d natural numbers are :\n\n",n);
for(i=1; i<=n; i++)
{
printf("%d",i);
sum +=i;
}
printf("\n\nsum=%d\n",sum);
getch();
}