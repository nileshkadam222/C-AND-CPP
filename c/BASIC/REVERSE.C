# include <stdio.h>
# include <conio.h>
main()
{
int n,sum=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n>0);
{
sum=sum+n%10;
n=n/10;
}
printf("the sum of digits is %d",sum);
getch();
}
