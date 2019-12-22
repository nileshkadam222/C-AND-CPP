  /*
# include<stdio.h>
# include<conio.h>
void main()
{
   int a[5], i,n,f=0;
   clrscr();
   printf("Enter the array elements");
   for(i=1;i<=5;i++)
   {
	 scanf("%d",&a[i]);
   }
   printf("Enter a number you want to check position of");
   scanf("%d",&n);
   for(i=1;i<=5;i++)
   {
	  if(a[i]==n)
	  {
		f=1;
		break;
	  }
   }
   if(f==0)
   {
	  printf("The entered number is not present");
   }
   else if(f==1)
   {
	  printf("The position of entered number is %d",i-1);
   }
   getch();
}


#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][3],i,j;
   clrscr();
   printf("Enter the array elements");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<3;j++)
	 {
	   scanf("%d",&a[i][j]);
	 }
   }
   printf("The matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<3;j++)
	 {
	   printf("%d \t",a[i][j]);
	 }
	 printf("\n");
   }
   getch();

}



#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][2],i,j;
   clrscr();
   printf("Enter the array elements");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   scanf("%d",&a[i][j]);
	 }
   }
   printf("The matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",a[i][j]);
	 }
	 printf("\n");
   }
  printf("The transpose of the matrix is \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",a[j][i]);
	 }
	 printf("\n");
   }
   getch();
}
	*/

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2], b[2][2],c[2][2],i,j;
  clrscr();
   printf("Enter the array elements for first matrix ");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   scanf("%d",&a[i][j]);
	 }
   }
	printf("Enter the array elements for second matrix");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   scanf("%d",&b[i][j]);
	 }
   }
   printf("\n The first matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",a[i][j]);
	 }
	 printf("\n");
   }

   printf("\n The second matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",b[i][j]);
	 }
	 printf("\n");
   }
	for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   c[i][j]=a[i][j]+b[i][j];
	 }
	 printf("\n");
   }
   printf("\n The addition matrix is \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",c[i][j]);
	 }
	 printf("\n");
   }
   getch();
  }

  /*
 #include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2], b[2][2],c[2][2],i,j;
  clrscr();
   printf("Enter the array elements for first matrix ");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   scanf("%d",&a[i][j]);
	 }
   }
	printf("Enter the array elements for second matrix");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   scanf("%d",&b[i][j]);
	 }
   }
   printf("\n The first matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",a[i][j]);
	 }
	 printf("\n");
   }

   printf("\n The second matrix is of the form \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",b[i][j]);
	 }
	 printf("\n");
   }
	for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   c[i][j]=a[i][j]*b[i][j];
	 }
	 printf("\n");
   }
   printf("\n The product matrix is \n");
   for(i=0;i<2;i++)
   {
	 for(j=0;j<2;j++)
	 {
	   printf("%d \t",c[i][j]);
	 }
	 printf("\n");
   }
   getch();
  }


*/