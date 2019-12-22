//multilevel inheritance base class stud,
//class marks derived from stud, class result derived from marks

#include<iostream.h>
#include<conio.h>

 class stud
  {
   private:
	 int no;
	 char name[20];
   public:
	 void get();
	 void print();
  };

 void stud::get()  //functn defintion of base class stud
  {
   cout<<"Enter the number:";
   cin>>no;
   cout<<"Enter name :";
   cin>>name;
  }
  void stud::print() //functn defintion of base class stud
  {
   cout<<"\nNumber :"<<no<<"\nName :"<<name;
  }

  class marks : public stud  // class derived  from base class stud
   {
	 protected :  // if pvt any dervd class of marks class can't access the pvt elements, so protected
	 int m1,m2,m3;

	public:
	  void get()  //to accept marks
	{
	  cout<<"Enter marks for m1,m2,m3:";
	  cin>>m1>>m2>>m3;
	 }
	void print()  //to print marks
	 {
	  cout<<"\nm1="<<m1<<"\nm2="<<m2<<"\nm3="<<m3;
	 }
  };

  class result:public marks  //clss dervd from class marks, marks is dervied class of class stud
   {
	float per;

	public:
	 void get()
	  {
	stud::get();  //get functn of stud called to accept roll,name
	marks::get(); // get functn of marks called to accept marks..
	per=(m1+m2+m3)/3.0;  //percentage calculated m1,m2,m3 can be directly accessed as they are protected
	  }
	void print()
	 {
	 stud::print();
	 marks::print();
	  cout<<"\nPercentage="<<per;
	 }
   };


void main()
   {
	result s1;
	clrscr();

	s1.get();
	clrscr();

	s1.print();
	getch();
  }