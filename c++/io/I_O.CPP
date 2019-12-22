/*
C++ uses the concept of streams and streams classes for i/o operations with
console and files.

Stream : is a sequence of bytes which acts as a source from which the input
data can be obtained or as  a destination to which the output data can be sent.

The source stream that provides data to the program is called a input stream,
The destination stream that receives output from the program is called as
an output stream.
------------------------------------------------
use of get() and put() functions  used to accept and print a character
respectively able to accept a newline and blankspace character which cin
is not capable of.
1. get() can be used in two ways  1. cin.get(c)  2. c =cin.get();
2. put() can be used like   cout.put(c) where 'c' is character variable.
*/

#include<iostream.h>
#include<conio.h>

void main()
 {
  char c;
  clrscr();
  cin.get(c);
  while(c!='\n')
   {
    cin.get(c);  //
  // c=cin.get();
    cout.put(c);
   }

  }