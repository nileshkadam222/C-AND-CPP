//COUNTING CHARACTERS, SPACES, WORDS, & NEW LINE IN A FILE
#include<stdio.h>
#include<conio.h>

 void main()
  {
   FILE *fp;
   char ch;
   int nol=0,not=0,nob=0,noc=0;
   clrscr();


   fp=fopen("TRIAL.txt","r");
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
      noc++;
      printf("%c",ch);
      if(ch==' ')
	nob++;
      if(ch=='\n')
       nol++;
      if(ch=='\t')
	  not++;
      }


   printf("The Status of file is  :  \n\n");
   printf("\nNo. of blank spaces   : %d",nob);
   printf("\nNo. of lines   : %d",nol);
   printf("\nNo. of tabs   : %d",not);
   printf("\nNo. of words   : %d",nob+nol);
   printf("\nNo. of charcters including spaces   : %d",noc-(nol+nol));
    fclose(fp);
   getch();
   }




