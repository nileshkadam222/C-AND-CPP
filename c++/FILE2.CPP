//creating file with constructor function.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

 void main()
  {
   const int SIZE=80;
   char line[SIZE];
   ifstream fl1;
   clrscr();

   fl1.open("nitin.txt");

   for(int i=1;i<=7;i++)
     {
     if(fl1.eof()!=0)
       {
	 cout<<"\n\nExit from file....";
	 exit(1);
       }
    fl1.getline(line,SIZE);
    cout<<line;
     cout<<endl;
   }
  getch();
 }





