		/*
# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{


   char ch[20];
   clrscr();
   printf("\n Enter the string");
   gets(ch);
   printf("\n The entered string is ");
   puts(ch);

   getch();
}

# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{
   int len,i;
   char ch[20];
   clrscr();
   printf("\n Enter the string ");
   gets(ch);
   len=strlen(ch);
   printf("\n The length of the entered string is %d",len);
   printf("\nThe reverse of the string is ");
   for(i=len-1;i>=0;i--)
   {
	  printf("%c",ch[i]);

   }

   getch();
}


# include<stdio.h>
# include<conio.h>
# include<string.h>
void main()
{
   int len,i,count=0;
   char ch[100];
   clrscr();
   printf("\n Enter the string");
   gets(ch);
   len=strlen(ch);
   for(i=0;i<=len;i++)
   {
	   if(ch[i]==' ')
	   count++;
   }
   printf("\n The number of spaces in the entered string is %d",count);
   printf("\n The number of words in the entered string is %d",count+1);
   getch();
}

	  */
# include<stdio.h>
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
}

