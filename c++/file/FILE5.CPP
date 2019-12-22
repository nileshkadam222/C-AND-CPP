//to illustrate the usage of put() function and
// to write a line of text in a file and display the contents

#include<fstream.h>
#include<conio.h>
#include<iostream.h>

void main()
 {
  char filename[13],line[26];
  char text[]="India is great.";
  int i;
  clrscr();
  cout<<"\nEnter the name of file to be opened   : ";
  cin>>filename;

  ofstream ofile(filename);

  if(!ofile)
     cout<<"Can't open file for writing.\n";
  else
   {
     for(i=0;i<16;i++)
      ofile.put(text[i]); //write into file;
      ofile<<"\n";
      ofile.close();  //closing file i.e disconnecting aa.txt from ofile.
   }

   ifstream ifile(filename);
   if(!ifile)
     cout<<"Can't open file...";
   else
    {
     cout<<"\nThe contenths of file are  .... \n\n\n";
     ifile.getline(text,80); //read a line from file
     cout<<text<<"\n";
     ifile.close();
    }
  getch();
  }





