#include<iostream.h>
#include<conio.h>

 void main()
  {
   int i;
   char nm[20]="Disha",nm1[]="computers",nm2[20];
   clrscr();

   for(i=0;nm[i]!='\0';i++)
     cout<<nm[i];

   cout<<endl<<endl;
     for(i=0;nm1[i]!='\0';i++)
     cout<<nm1[i];
     //accepting a string using cin
     cin>>nm2;
     cout<<endl<<endl;

     for(i=0;nm2[i]!='\0';i++)
     cout<<nm2[i];

   getch();
}