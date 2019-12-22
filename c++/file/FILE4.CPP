//to create a file to store text and display the contents
#include<fstream.h>
#include<conio.h>
#include<iostream.h>

void main()
 {
  char text[80];
  ofstream ofile("try.txt");  //connection file to output stream ofile
  clrscr();

  if(!ofile)
     cout<<"Can't open file for writing.\n";
  else
   {
     ofile<<"Programming is a skill.\n";
     ofile<<"Always have faith in your self.\n";
     ofile<<"You may be a successful programmer.\n";
     ofile.close();  //closing file i.e disconnecting aa.txt from ofile.
   }

   ifstream ifile("try.txt");  //connecting aa.txt to ifile
   if(!ifile)
     cout<<"Can't open file...";
   else
    {

     cout<<"\nThe contenths of file are  .... \n\n\n";
     for(int i=0;i<3;i++)
      {
       ifile.getline(text,80); //read a line from file
       cout<<text<<"\n";
      }
      ifile.close();
    }
  getch();
  }





