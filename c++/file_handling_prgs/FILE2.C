//FILE NOT AVAILABLE ON DISK
#include<stdio.h>
#include<conio.h>

 void main()
  {
   FILE *fp;
   char ch;
   clrscr();

   fp=fopen("b.txt","r");
    if(fp==NULL)
     {
       puts("Cannot open file..");
       exit();
     }

   while(1)
    {
     ch=fgetc(fp);

      if(ch==EOF)
	 break;
      printf("%c",ch);
     }
    fclose(fp);
   getch();
   }




