#include<stdio.h>
/*#include<conio.h>
#include<string.h>
void main()
{
char L[20],len,i;
clrscr();
printf("Enter the string=");
gets(L);
printf("\nThe entered string is=");
puts(L);
len=strlen(L);
printf("\nThe length of string is=%d",len);
printf("\nThe reverse of entered string is=");
for(i=len-1;i>=0;i--)
	{
printf("%c ",L[i]);
	}

getch();
} */
//======================================================

/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,len,count=0;
char L[100];
clrscr();
printf("Enter the string=");
gets(L);
len=strlen(L);
for(i=0;i<=len;i++)
	{
	if(L[i]==' ')
		{
		count++;
		}
	}
printf("\nThe number of spaces are=%d",count);
printf("\nThe number of words are=%d",count+1);
getch();
} */
//=====================================================

/*# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{
   int len, ans;
   char s1[20],s2[20];
   clrscr();
   printf("\n Enter the string");
   gets(s1);
   len=strlen(s1);
   printf("\n The length of the entered string is %d",len);
   strcpy(s2,s1);
   printf("\n After copying the second string is ");
   puts(s2);
   ans=strcmp(s1,s2);
   if(ans>0)
   {
	  printf("\n First string is greater");
   }
   else if(ans<0)
   {
   printf("\n Second string is greater");
   }
   else
   {
	 printf("\n Both the string is same");
   }
   strcat(s1,s2);
   printf("\n After concatination first string is ");
   puts(s1);
   printf("\n After concatination second string is ");
   puts(s2);
   getch();
}*/
//============================================================
/*#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len,ans;
char s1[20],s2[20];
clrscr();
printf("Enter the string=");
gets(s1);
len=strlen(s1);
printf("\nThe length of entered string is=%d",len);
strcpy(s2,s1);
printf("\nAfter copying second string is=");
puts(s2);
ans=strcmp(s1,s2);
if(ans>0)
	{
	printf("\nFirst string is greater");
	}
if(ans<0)
	{
	printf("\nSecond string is greater");
	}
else
{
printf("\nBoth strings are same");
}
strcat(s1,s2);
printf("\nAfter concatination first string is=");
puts(s1);
printf("\nAfter concatination second string is=");
puts(s2);
getch();
} */



#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int len,ans;
char s1[20],s2[20];
clrscr();
printf("Enter the string=");
gets(s1);
len=strlen(s1);
printf("\nThe length of entered string is=%d",len);
printf("\n\nEnter another string=");
gets(s2);
len=strlen(s2);
printf("\nThe length of entered string is=%d",len);
ans=strcmp(s1,s2);
if(ans>0)
	{
	printf("\nFirst string is greater");
	}
	if(ans<0)
	{
	printf("\nSecond string is greater");
	}
strcat(s1,s2);
printf("\nAfter concatination first string is=");
puts(s1);
printf("\nAfter concatination second string is=");
puts(s2);
getch();
}