//to store bank client data using object and class.
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class bank
 {
   private :
     char name[5];
     char address[30];
     int ac_no;
     float bal_amt;

     public :
      void accept();  //to accept a record
      void disp(); //to disp a record
     };

  void bank :: accept()
   {
    cout<<"\t\t\t\nEnter data of Client";
    cout<<"\t\t\t\n====================\n";
    cout<<"\nEnter Name          :  ";
    gets(name);  //to accept a string
    cout<<"\nEnter Address       :  ";
    gets(address);
    cout<<"\nEnter A/C Number    :  ";
    cin>>ac_no;
    cout<<"\nEnter Balance Amnt  :  ";
    cin>>bal_amt;
  }

   void bank :: disp()
   {
    cout<<"\t\t\t\nCustomer Information";
    cout<<"\t\t\t\n====================\n";
    cout<<"\n1. Name           :  "<<name;
    cout<<"\n2. Address        :  "<<address;
    cout<<"\n3. A/C Number     :  "<<ac_no;
    cout<<"\n4. Balance Amnt   :  "<<bal_amt;
    gotoxy(25,22);
    cout<<"Enter Any Key to Exit.........";
   }

  void main()
   {
    clrscr();
    bank client;
    client.accept();
    client.disp();
    getch();
   }








