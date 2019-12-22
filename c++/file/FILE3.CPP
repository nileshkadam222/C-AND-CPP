//to create a file to store integers and display the contents
#include<fstream.h>
#include<conio.h>
#include<iostream.h>

void main()
 {
  ofstream ofile("aa.txt");
  int x,y,z;
  clrscr();

  if(!ofile)
     cout<<"Can't open file for writing.\n";
  else
   {
     cout<<"Enter the thre integers   : ";
     cin>>x>>y>>z;
     ofile<<x<<" "<<y<<" "<<z;  //write to file
     ofile.close();  //closing file i.e disconnecting aa.txt from ofile.
   }

   ifstream ifile("aa.txt");  //connecting aa.txt to ifile
   if(!ifile)
     cout<<"Can't open file...";
   else
    {
     cout<<"\nThe three integers of file are  .... \n";
     cout<<x<<" "<<y<<" "<<z;
     ifile.close();
    }
  getch();
  }





