
#include<iostream.h>
#include<conio.h>

 class stud
   {
	private:
	 int no,tele;
	 char name[30],add[50];


	public:
	  void get();
	  void print();
   };

 void stud::get()  //definition of member function of class  stud
  {
	cout<<"Enter the number :"<<endl;
	cin>>no;
	cout<<"Enter the telephone: "<<endl;
	cin>>tele;
	cout<<"Enter the name :"<<endl;
	cin>>name;
	cout<<"Enter the address: "<<endl;
	cin>>add;
  }

   void stud::print() //definition of member function of class  stud
	{
	  cout<<"\n\nNumber :"<<no<<" \n \n Telephone"<<tele<<"\n \n Name :"<<name<<"\n \n Address"<<add;
	}

  class phy_info : public stud  //inherited class phy_info from base class stud
   {
	 float h;
	 float w;

	 public:
	  void get()  //member function of pyh_info class...
	   {
	stud::get(); //get function of base class stud called by dervd class fucntion get.
	cout<<"\n\nEnter  Height & Weight   :  ";
	cin>>h>>w;
	   }
	  void print()
	   {
	stud::print(); //functn print from base class to print roll & name
	cout<<"\nHeight :"<<h<<"Weight :"<<w; //prntg of height & weigh from inherited class
	   }
	 }; //closing of class phy_info

  void  main()
	 {
	   phy_info s1;
	   clrscr();
	   s1.get();  //get  functn of phy_info called and the get calls get function of base class
	   clrscr();
	   s1.print();
	   getch();
	 }
