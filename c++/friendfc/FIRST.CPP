Friend Functions :
------------------
Private members of a class can't be accessed from outside the class. i.e a
non member function can't access to the private data members of a class.
When there is a case where two classes will need to share a same function
C++ allows us to declare a friend function so that it becomes accessible
to both the classes. To make a function friend function we need to preceed
the function name with keyword friend.

Syntax of Making a Function : Friend Function.
---------------------------------------------
class abc
 {
  ------------ ;
  ------------;
  public :
   ------------ ;
   ------------ ;
   friend void xyz(void); //declartion of a friend function
  };


  Characteristics of a Friend Function
  -------------------------------------
The fucntion definition does not use either the keyword friend or scope
resolution operator.
A function can be declared as a friend