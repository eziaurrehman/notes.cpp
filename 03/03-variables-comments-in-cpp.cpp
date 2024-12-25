// # high level language
//  language that provides a lot of abstraction from hardware
//  esaier to learn and use foucsing on productvity
//  far from hardware
//  logically sound

// # low level language
//  language that are closer to the machine code or hardware
//  and is less absract
//  closer to hardware

// # variables
//  its a container to store your data
//  common types are  int,float,char,bool,and string
//  a variable is named memory location used to store data

// .A variable is a container to hold data
// .Variable can be of various types
// .Primarily we have these variable types in C++
// 1. int : its number, 1,2,5,etc
// 2. float: help to store decimal number
// 3. char: store character, 'c' etc
// 4. double: to store big number
// 5. boolean:its used for true or false

//. int sum =34: means sum is an interger variable which hold
// ...value 34 in memory
// # data_type variables_name=values
// . Ex. int a=4, b=6

// # comments
//  used to explain code; ingnored by the compiler
//  # types
//  a. single_ line: start with //.
//  b. multi_line: enclosed in /*  */ .
//  # purpose :
//  improve readability and document code

#include <iostream>
using namespace std;

int main()
{
    int num; // declaration

    num = 2; // initialization - putting value for the first time

    int numForTesting = 15; // declaration & initialization

    // vairiables are case sensitive
    int numFORTesting = 25;
    int num_for_testing = 35;

    cout << "Hello world" << endl;
    cout << "num: " << num << endl;
    cout << "numForTesting: " << numForTesting << endl;
    cout << "numFORTesting: " << numFORTesting << endl;
    cout << "num_for_testing: " << num_for_testing << endl;

    return 0;
}
