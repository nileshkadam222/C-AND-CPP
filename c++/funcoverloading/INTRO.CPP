/*
OPERATOR OVERLOADING
====================
C++ has the ability to provide the operators with a special meaning for
a data type. This system of giving special meaning to an operator is called
as operator overloading. OO gives us the flexibility for creating new
definitions for most C++ operators. All the operators can be overloaded
except :-
1. class member access operator (. , .*)
2. scope resolution operator ( :: )
3. Size of operator.
4. Conditional operator.

When an operator is overloaded it does'nt loose its original usage.

Defining Op. Overloading
syntax / function prototype

 return type classname :: operator op_type (op_argument list)
 ============================================================
 where operator is a special function.
 op_type is the regular C++ operator which is to be overloaded.

Operator Function must be either member function or friend function.
A friend function will have only one argument for unary operators and two
for binary operators.
While a member function will have no argument for unary operators and
only one for binary operators. B'cos object used to call the operator function
is called implicitly and therefore is available to memeber function.








*/