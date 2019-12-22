#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
clrscr();
printf("enter the value of n");
scanf("%d",&n);
printf("\nfirst %d natural numbers are\n\n",n);
while(i<=n)
{
printf("%2d",i);
sum+=i;
i++;
}
printf("\nsum=%d\n",sum);
getch();
}