//creating file using open() function and working with multiple files.
#include<iostream.h>
#include<fstream.h>
#include<conio.h>

 void main()
  {
   clrscr();
   ofstream fout; //creating an output stream.
   fout.open("country"); //connect country to it

   fout<<"INDIA\n";
   fout<<"AUSTRALIA\n";
   fout<<"SWEDEN\n";
   fout<<"ITALY\n";

   fout.close();

   fout.open("capital");
   fout<<"DELHI\n";
   fout<<"CANBERRA\n";
   fout<<"STOCKHOLM\n";
   fout<<"ROME\n";

   fout.close();
   //reading of files
   const int N=80;
   char line[N];

   ifstream fin;
   fin.open("country");

   cout<<"Contents of file country are   :  \n\n";

   while(fin)
    {
     fin.getline(line,N);  //reading a line
     cout<<line<<endl;//displaying line
     }
   fin.close();

   fin.open("capital");
   cout<<"Contents of file capital are   :  \n\n";

   while(fin)
    {
     fin.getline(line,N);  //reading a line
     cout<<line<<endl;//displaying line
     }
   fin.close();
getch();
}

