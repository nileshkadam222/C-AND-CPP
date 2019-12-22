
// 1) FACTORIAl
	   /*

#include<stdio.h>
#include<conio.h>
int fact();
int fact()
{
 int i,fact=1,n;
  printf("Enter a number: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
   {
	fact=fact*i;
   }

  printf("\n %d! = %d ",n,fact);

  return(fact);
}

void main()
 {
  clrscr();
  fact();
  getch();
 }
		 */


		 // 2) TABLE //



 #include<stdio.h>
#include<conio.h>
int tab();
int tab()
{
 int i,ans=0,n;
  printf("Enter a number: ");
  scanf("%d",&n);

  for(i=1;i<=10;i++)
   {
	ans=i*n;
	printf("\n %d * %d = %d ",n,i,ans);
   }


  return(ans);
}

void main()
 {
  clrscr();
  tab();
  getch();
 }

