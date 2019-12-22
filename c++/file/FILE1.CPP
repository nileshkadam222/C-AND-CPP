//creating file with constructor function.

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

 void main()
  {
   ofstream outf("ITEM.DAT");  //connection item file to outf
   char name[20];
   float cost;
   clrscr();
   cout<<"Enter item name  :  ";
   cin>>name;

   outf<<name<<"\n"; //write to file item

   cout<<"Enter cost  :  ";
   cin>>cost;
   outf<<cost<<"\n"; //write to file item

   outf.close(); //disconnect item file with outf
   ifstream inf("ITEM.DAT"); //connect item file to inf
   inf>>name;
   inf>>cost;
   cout<<"\n";

   cout<<"item name  :  "<<name<<"\n\n";
   cout<<"item cost  :  "<<cost<<"\n\n";

   inf.close();
   getch();
   }




