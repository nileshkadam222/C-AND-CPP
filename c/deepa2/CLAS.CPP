

#include<iostream>

using namespace std;

class test
{
   private:
	  int a;

   public:

	  void input_value()
	  {
		 cout << "Enter an integer\n";
		 cin >> a;
	  }

	  void output_value()
	  {
		 cout << "Variable entered is ";
		 cout << a << "\n";
	  }
};

void main()
{
   test t;

   t.input_value();
   t.output_value();

   //t.a;  Will produce an error because variable is private

   getch();
}
   /*


===================================

  class Example_class //Sample Class for the C++ Tutorial 
   {
       private:
         int x; //Data member 
         int y; // Data member 
       public: 
         Example_Class() //Constructor for the C++ tutorial 
         { 
             x = 0;
             y = 0;
         }
       ~Example_Class() //destructor for the C++ Tutorial 
       { } 
      int Add() 
      { 
         return x+y;
	  }
};

 ======================================
// example one
 #include <iostream>
 #include <stdio.h>
 
 class Book
 {
 int PageCount;
 int CurrentPage; 
 public:
 Book( int Numpages) ; // Constructor
 ~Book(){} ; // Destructor
 void SetPage( int PageNumber) ;
 int GetCurrentPage( void ) ;
 }; 
 
 Book::Book( int NumPages) {
 PageCount = NumPages;
 }
 
 void Book::SetPage( int PageNumber) {
 CurrentPage=PageNumber;
 }
 
 int Book::GetCurrentPage( void ) {
 return CurrentPage;
 }
 
 int main() {
 Book ABook(128) ;
 ABook.SetPage( 56 ) ;
 std::cout << "Current Page " << ABook.GetCurrentPage() << std::endl;
 return 0;
 }
 ===============================================
#include <iostream>
using namespace std;

class Rect{

private:
	//representing the 2 sides of the rectangle.
	int s1, s2;

public:

	//constructors:
	//default constructor:
	Rect(){
		s1 = 1;
		s2 = 1;
	}

	//non default constructor:
	Rect(int a, int b){
		s1 = a;
		s2 = b;
	}

        //member functions:
	int Area(int s1, int s2){
		return(s1*s2);
	}

	int Perimeter(int s1, int s2){
		return(2*s1 + 2*s2);
	}
};

int main(){

	Rect r(3,5);

	cout << "Area of sides 3, 5 is: "
             << r.Area(3,5) <<  endl;

	cout << "Perimeter of sides 3, 5 is: "
			 << r.Perimeter(3,5) << endl;

	return 0;
}
===================================================
#include <iostream>
using namespace std;

class Rect{

private:
	//representing the 2 sides of the rectangle.
	int s1, s2;

public:

	//constructors:
	//default constructor:
	Rect(){
		s1 = 1;
		s2 = 1;
	}

	//non default constructor:
	Rect(int a, int b){
		s1 = a;
		s2 = b;
	}

        //accessors:
        int getS1(){ return s1; }
        int getS2(){ return s2; }

        //member functions:
	int Area(int s1, int s2){
		return(s1*s2);
	}

	int Perimeter(int s1, int s2){
		return(2*s1 + 2*s2);
	}
};

int main(){

	Rect r(3,5);

	int s1 = r.getS1();
	int s2 = r.getS2();

	cout << "Area of sides 3, 5 is: "
             << r.Area(s1,s2) <<  endl;

	cout << "Perimeter of sides 3, 5 is: "
             << r.Perimeter(s1,s2) << endl;

	return 0;
}
================================================

*/