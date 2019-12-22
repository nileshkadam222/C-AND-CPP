//----------------------------------------------------------------------------
//WAP to count specific numbers in array elements  entered by the user.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,n,c=0;
  clrscr();
  printf("Enter A Number");
  scanf("%d",&n);
  printf("Enter Array Elements");
  for(i=0;i<5;i++)
  {
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	if(a[i]==n)
	{
	  c=c+1;
	}
  }
  printf("The Count Is %d",c);
  getch();
}
*/
//----------------------------------------------------------------------------
//WAP to accept a number and check its position.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,n;
  clrscr();
  printf("Enter Array Elements");
  for(i=0;i<5;i++)
  {
	scanf("%d",&a[i]);
  }
	printf("Enter The Number To Be Checked");
	scanf("%d",&n);
	for(i=0;i<5;i++)
  {
	if(a[i]==n)
	{
	  break;
	}
  }
  printf("Position Of Entered Number Is %d",i+1);
  getch();
}
*/
//----------------------------------------------------------------------------
//WAP to swap array elements.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],b[5],c[5],i=0;
  clrscr();
  printf("Enter Array Element a");
  for(i=0;i<5;i++)
  {
	scanf("%d",&a[i]);
  }
  printf("Enter Array Element b");
  for(i=0;i<5;i++)
  {
	scanf("%d",&b[i]);
  }
  for(i=0;i<5;i++)
  {
	c[i]=a[i];
	a[i]=b[i];
	b[i]=c[i];
  }
  printf("Post Swap A Is");
  for(i=0;i<5;i++)
  {
	printf("\n %d",a[i]);
  }
  printf("Post Swap B Is");
  for(i=0;i<5;i++)
  {
	printf("\n %d",b[i]);
  }
  getch();
}
*/
//----------------------------------------------------------------------------
//WAP to accept entries from the user and display it.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,a[2][2];
  clrscr();
  printf("Enter Array Elements");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  scanf("%d",&a[i][j]);
	}
  }
  printf("The Array Elements Are:\n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  printf("%d\t",a[i][j]);
	}
	printf("\n");
  }
  printf("Post Interchange Of Matrix;\n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  printf("%d\t",a[j][i]);
	}
	printf("\n");
  }
  getch();
}
*/
//-----------------------------------------------------------------------------
//WAP to subtract two matrix.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2],i,j;
  clrscr();
  printf("Enter Array Elements For A : \n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  scanf("\n %d",&a[i][j]);
	}
  }
  printf("Enter Array Elements For B : \n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  scanf("\n %d",&b[i][j]);
	}
  }
  printf("The Array Elements For A Are : \n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  printf("\n %d",a[i][j]);
	}
	printf("\n");
  }
  printf("The Array Elements For B Are : \n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  printf("\n %d",b[i][j]);
	}
	printf("\n");
  }
  printf("The Multiplication Of Both Matrix Are : \n");
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  c[i][j]=a[i][j]*b[i][j];
	}
  }
  for(i=0;i<2;i++)
  {
	for(j=0;j<2;j++)
	{
	  printf("\n %d",c[i][j]);
	}
	printf("\n");
  }
  getch();
}
*/
//---------------------------------------------------------------------------
//WAP to represent switch statements.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  char n;
  clrscr();
  printf("Enter A Charactar To Check Wheather It Is A Vowel Or Not \n");
  scanf("%c",&n);
  switch (n)
  {
	case 'a':
	  printf("%c Is A Vowel",n);
	  break;
	case 'e':
	  printf("%c Is A Vowel",n);
	  break;
	case 'i':
	  printf("%c Is A Vowel",n);
	  break;
	case 'o':
	  printf("%c Is A Vowel",n);
	  break;
	case 'u':
	  printf("%c Is A Vowel",n);
	  break;
	default:
	  printf("The Entered Charactar Is Not A Vowel Or Is Invalid");
  }
  getch();
}
*/
//----------------------------------------------------------------------------
//WAP to represent switch function in story programming mode.
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("Welcome To Disha Food Marketing LTD. \n");
  printf("To Make Purchases Enter The Following Numbers As Per Your Choice\n");
  printf("Serial Number: \t Item: \n");
  printf("1 \t \t Apple \n");
  printf("2 \t \t Banana \n");
  printf("3 \t \t Coconut \n");
  printf("4 \t \t Guava \n");
  printf("5 \t \t Jackfruit \n");
  printf("6 \t \t Mango \n");
  printf("7 \t \t Pineapple \n");
  printf("8 \t \t Watermelon \n");
  printf("Note: You Can Purchase Only One Item;\n");
  printf("Kindly Enter Your Choice Now:\n");
  scanf("%d",&n);
  switch(n)
  {
	case 1:
	  printf("You Entered '1' \n");
	  printf("This Apple Will Cost You $6 \n");
	  break;
	case 2:
	  printf("You Enteres '2' \n");
	  printf("This Banana Will Cost You $2 \n");
	  break;
	case 3:
	  printf("You Entered '3' \n");
	  printf("This Coconut Will Cost You $4 \n");
	  break;
	case 4:
	  printf("You Entered '4' \n");
	  printf("This Guava Will Cost You $3 \n");
	  break;
	case 5:
	  printf("You Entered '5' \n");
	  printf("This Jackfruit Will Cost You $5 \n");
	  break;
	case 6:
	  printf("You Entered '6' \n");
	  printf("This Mango Will Cost You $7 \n");
	  break;
	case 7:
	  printf("You Entered '7' \n");
	  printf("This Pineapple Will Cost You $5 \n");
	  break;
	case 8:
	  printf("You Entered '8' \n");
	  printf("This Watermelon Will Cost You $6 \n");
	  break;
	default:
	  printf("You Entered An Incorrect/Invalid Statement");
  }
  printf("Thank You! Please Come Back Again!");
  getch();
}
*/
//----------------------------------------------------------------------------
