//out of class defintion

#include<iostream.h>
#include<conio.h>

class time          //class declaration
 {
  int hr;          //data members
  int min;
  int sec;

 public :            //permission lable
  void gettime();         //declaration of member function
  void printtime();  //declaration of member function
  };  //closing of class


//**********DEFINITION OF FUNCTION OUT OF CLASS/
   void time :: gettime()         //member function
    {
     cout<<"\n\nEnter Hours    :  ";
     cin>>hr;
     cout<<"Enter Minutes  :  ";
     cin>>min;
     cout<<"Enter Seconds  :  ";
     cin>>sec;
    }
 //-----------------------------------------------------
  void time :: printtime()  //member function
   {
     cout<<"\n\nHr  : "<<hr<<"  Min  :  "<<min<<"  Sec  :  "<<sec;
   }
    }

//-----------------------------------------------------

 class number   //another class declaration & definition
    {
     int a;

    public :
     void accept()
      {
       cout<<endl<<"\nEnter a no.  ";
       cin>>a;
       }
	void print()
      {
       cout<<endl<<"\nEntered no. is "<<a;
       }

     };

 void main()
 {
  number n;
 // n.a=10;  //not allowed as a is private member
   time a,b,c; //declaration of objects a,b and c of class time.
   clrscr();

  /* n.accept();
   n.print();
    */
   a.gettime();
   a.printtime();  //a is called as invoking object

   b.gettime();
   b.printtime();  //a is called as invoking object

   c.gettime();
   c.printtime();  //a is called as invoking object

   getch();
 }
