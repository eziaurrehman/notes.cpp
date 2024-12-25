// .HEADER FILE:
// .A header file is a file (like.h in C++ that contains declarations of function,
// ..variables,classes,or)
// .It helps in code reuse and organizes commenly used functionalities.
// .It is included in programms using the #include directive.

// There are two types of header files:
// 1. System header files: It comes with compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" .This will produce an error if this.h is no present in the
// current directory

// .OPERATORS IN C++:
// . in c++, operators are used to perform various operatios on variables and values

// . TYPES OF OPERATORS:

// 1. ARITHMETIC OPERATORS:
//  .Used for basic arithmetic operations.
//  .+(addition)
//  ._(subtraction)
//  .*(multiplication)
//  ./(division)
//  %(modulus,remainder)

// 2.ASSIGNMENT OPERATORS:
// .Used to assign values to variables.
// .=(simple assignment)
// .+=,-=,/=,%=(compound assignments)

// 3.RELATIONAL OPERATORS/ COMPARISON OPERATOR:
// .Used to compare rwo values.
//  .==(equal to)
//  .!=(not equal to)
//  .<(less than)
//  .>(greater than)
//  .>=(greater than or equal to)
//  .<=(less than or equal to)

// 4.LOGICAL OPERATORS:
// .Used for logical operations, often in conditional statements.
//   .&&(logical AND)
//   .||(logical OR)
//   .|(logical NOT)

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;

    // Arithmetic operators
    cout << "The value of a+b is " << a + b << endl; // 9
    cout << "The value of a-b is " << a - b << endl; // -1
    cout << "The value of a*b is " << a * b << endl; // 20
    cout << "The value of a/b is " << a / b << endl; // 0.10
    cout << "The value of a%b is " << a % b << endl;
    cout << "The value of a++is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assigment operators -- used to assign value to variables
    // int a =3, b =9;
    // char d= 'd';

    // Comparision operators:
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a < = b is " << (a <= b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << endl;

    // LOGICAL OPERATORS:
    cout << "Following are the logical operator in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is :" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is :" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)  (a<b)) is :" << (!(a == b) || (a < b)) << endl;

    return 0;
}