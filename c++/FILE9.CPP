//reding from two file simultaneously
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>    //for exit function

 void main()
  {
   const int SIZE = 80;
   char line[SIZE];

   ifstream fin1,fin2;
   clrscr();

   fin1.open("country"); //connect country to it
   fin2.open("capital");

   for(int i=1;i<=10;i++)
    {
     if(fin1.eof()!=0)
       {
	cout<<"\n\nExit from country...";
	exit(1);
       }
     fin1.getline(line,SIZE);
     cout<<"Capital of   :  "<<line;

     if(fin2.eof()!=0)
      {
	cout<<"\n\nExit from capital....";
	exit(1);
      }

     fin2.getline(line,SIZE);
     cout<<"\t\t"<<line<<"\n";
    }
getch();
}






