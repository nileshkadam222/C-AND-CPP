# include <stdio.h>
# include <conio.h>
main()
{
int n,sum;
sum=0;
clrscr();
printf("enter the number:");
scanf("%d",&n);
while(n>9)
{
	sum=0;
	while(n>0)
{
		sum=sum+n%10;
		n=n/10;
}
}
printf("%d",sum);
n=sum;
getch();
}