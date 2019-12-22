
#include<stdio.h>
#include<conio.h>

 void main()
  {
   FILE *fp;
   char ch;
   clrscr();

   fp=fopen("pran.txt","r");

   while(1)
    {
     ch=fgetc(fp);

      if(ch==EOF)
	 break;
      printf("%c",ch);
     }
    fclose(fp);  //to close the file
   getch();
   }




