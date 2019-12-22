//to copy a text file to another

#include<fstream.h>
#include<conio.h>
#include<iostream.h>

void main()
 {
  struct student
   {
    char name[20];
    int roll;
    int marks[3];
    int total;
   };
   student stud;
   int i,n,j,size;
   char target[13],ch;
   size=sizeof(student); //find the size of structure
   clrscr();
   cout<<"\nEnter the name of file to be created   :   ";
   cin>>target;

   ofstream ofile("aaa.txt"); //open file with output mode.

   if(!ofile)
     cout<<"Can't open file for writing.\n";
   else
   {
    cout<<"\nHow many students are there ?\n";
    cin>>n;
    for(i=0;i<n;i++)
     {

      cin.get(ch);
      cout<<"\nRecord no. : "<<i;
      cout<<"\nEnter name   :  ";
      cin.getline(stud.name,20);
      cout<<"Enter Roll. No.:  ";
      cin>>stud.roll;
      cout<<"\nEnter the marks in 3 subjects   : ";
      stud.total=0;
      for(j=0;j<3;j++)
	cin>>stud.marks[j];

      for(j=0;j<3;j++)
	stud.total=stud.total+stud.marks[j];
	ofile.write((char*) &stud,sizeof(stud));

    }
}
ofile.close();
}f