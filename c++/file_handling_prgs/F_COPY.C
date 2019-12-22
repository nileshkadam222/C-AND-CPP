#include<stdio.h>
#include<conio.h>

 void main()
  {
   FILE *fs,*ft;
   char ch;
   clrscr();


   fs=fopen("aa.cpp","r");


  if(fs==NULL)
    {
     puts("Can't open the SOURCE file....");
     exit();
    }

   ft=fopen("hdixit.txt","w");
    if(ft==NULL)
     {
      puts("Can't open the TARGET file....");
      exit();
     }
   while(1)
    {
     ch=fgetc(fs);
      if(ch==EOF)
       break;
      fputc(ch,ft);
    }
  fclose(fs);
  fclose(ft);
  getch();
   }

