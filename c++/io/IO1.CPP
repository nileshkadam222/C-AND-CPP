/* use of getline() and putline functions
1. getline() used to accept a line or multi word string. cin.getline(name,size)
2. write() used to print an entire line. syntax is  : cout.write(line,size)
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
 {
  char nm[20],nm1[20]="";
  int len;
  clrscr();

  cin.getline(nm,20); //accepts multi word string and terminates it with enter key i.e. a new line character

 //  cin>>nm; //a multi word string can't be accepted using cin
    len=strlen(nm);
   cout.write(nm,len);


    cin.getline(nm1,20);
    len=strlen(nm1);

   cout.write(nm1,len); //prints beyond the null character

  }