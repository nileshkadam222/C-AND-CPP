//to copy a text file to another

#include<fstream.h>
#include<conio.h>
#include<iostream.h>

void main()
 {
  char source[13],target[26];
  char ch;
  clrscr();

  cout<<"\nEnter the source file name to be copied   :   ";
  cin>>source;

  ifstream ifile(source); //open file

  if(! ofile)
     cout<<"Can't open file for writing.\n";
  else
   {
     cout<<"Enter the target file name to transfer source file   :  ";
     cin>>target;
     ofstream ofile(target); //opening file in output mode.
      if(!ofile)
	cout<<"\nCan't opne the file....";
      else
       {
	while(ifile)
	 {
	   ifile.get(ch);
	   ofile.put(ch);
	 }
	cout<<"\n\n\tSource file copied to target file....";
      }
     ofile.close();
   }
  ifile.close();
  getch();
 }
