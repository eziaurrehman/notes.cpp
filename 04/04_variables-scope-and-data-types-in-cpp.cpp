//# Based on scope, variables can be classified into two types 
// 1. Local variables 
// 2. Global variables

//# scope:scope of variable is the region in te code where the existence
//...of variable is valid

// #Based on scope we have local and global variables in c++ 
// LOCAL VARIABLES: Local variables are declared inside the braces of any
//...function and can be accessed only from there
// GLOBAL Variables: Global variables are declared outside any fuction and
//... can be accessed from anywhere
 
// Can global and local variables have same name in C++?: 
//..Yes,we will see!

//# C++ Data Types:
// . Data types define the type of data in varibles can hold ,for example 
//.. an interger variable can hold interger data ,a character type varibles
//... can hold character dada etc.

// Data types in C++ are categorised in three groups:
// . Built-In Data Types In C++

// 1.int: Used to stored intergers (whole number) eg: int x =5;

// 2.folat: Used to store single_precision floating _point numbers 
// .. decimal number 
// ... eg: float pi = 3.14;

// 3.char: Used to store a single character.
// ..eg, char letter = 'A';

// 4. double: Used to store double _precion floating _point numbers 
// .. higher precision than float 
// ... eg,double pi = 3.14159

// 5.Bool:Used to stored boolean values,true or false. 
// .. eg: bool isActive = true;


// # USER DEFINED DATA TYPES IN C++

// 1.Struct: Used to group variables of different types into a single unit 

// 2.Union: A special data type where all members share the same memory 
//... location.

// 3.Enum: used to define a set of named integer constants.

// # DERIVED DATA TYPES: 

// 1.Arrays: A collection of elements of the same data type.
// ..eg: int arr [5] ={1,2,3,4,5}

// 2.Pointers: variables that store the memory address of another variable
// Example: (C/C++):

// 3.Functions: in some languages, functions are considered data types and
// ..can be passed as arguments or returned from other functions (eg)
// ... function pointers in c,lambda function in python.

// Rules To Declare Variables In C++:
// .Variables names in C++ can range from 1 to 255 characters.
// .All variables names must begin with a letter of the alphabet or 
// ..an underscore(_).
// .After the first initial letter, variable names can also contain 
// ..letters and numbers.
// .Variable names are case sensitive.
// .No space or special characters are allowed. 
// .You can use a C++ keyword (a reserved word) as a variable name.



#include <iostream> // Include the library for input and output
using namespace std;
      
int main(){
    int a =4;
    int b =5;

    cout<< "This is tutorial 4. Here the value of a is "<<a << ". The value of b is " << b;
    




    return 0;
    
}
          
 






















































































