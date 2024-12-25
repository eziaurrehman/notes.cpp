/* Constants, Manipulators & Operator Precedence In C++:
.In this series of our C++ tutorials, we will visualize the constants, manipulator, and
.operator precedence in the C++ language in this lecture. In our last lesson, we 
.discussed the reference variable and typecasting in C++. 

.In this C++ tutorial, the topics which we are going to cover today are given below:

.Constants in C++
.Manipulator in C++
.Operator Precedence in C++


#.Constants in C++:
.Constants are unchangeable; when a constant variable is initialized in a program, 
.its value cannot be changed afterwards. An example program for constants is.
 
 constant in C++ 
 const float a = 3.11;
 cout<<"The value of a was: "<<a<<endl;
 a = 45.6;
 cout<<"The value of a is:"<<a<<endl;
 return 0;


.As shown in, a constant float variable "a" is initialized with a value 3.11, but when 
.we tried to update the value of "a" with a value of 45.6, the compiler throws an error
.stating that the constant variable is being reassigned a value. An error message can
.be seen in.

Manipulator:
In C++ programming, language manipulators are used in the formatting of output. The 
two most commonly used manipulators are:

"endl" is used for the next line.
"setw" is used to specify the width of the output.
An example program to show the working of a manipulator is:

int a= 3, b=78, c=1233;
cout<<"The value of a without setw is:"<<a<<endl;
cout<<"The value of b without setw is:"<<b<<endl;
cout<<"The value of c without setw is:"<<c<<endl;


.As shown in, we have initialized three integer variables "a, b, c". First, we printed
.all the three variables and used "endl" to print each variable in a new line. After
.that, we again printed the three variables and used "setw(4)", which will set their
.width to 4. The output for the following program is shown in figure 4.

The value of a without setw is: 3
The value of b without setw is: 78
The value of c without setw is: 1233



Operator Precedence & Operator Associativity:

.#OPERATOR PRECENDENCE helps us to solve an expression. For example, in an expression
."int c = a*b+c" the multiplication operator's precedence is higher than the 
.precedence of the addition operator, so the multiplication between "a & b" 
.performed first, and then the addition will be performed.

.#Operator associativity helps us to solve an expression; when two or more operators
.have the same precedence,the Operator associativity helps us decide that we should
.solve the expression from "left-to-right" or from "right-to-left".
 
.An example program for operator precedence and operator associativity is:
 // OPERATOR Precendence & associativity:
 int a =3, b=4;
 // int c = ((((a*5)+b)-45)87);
 cout<< c;
 return 0;

.As shown in, we initialized two integer variables and then wrote an expression 
."int c = a*5+b;" on which we have already discussed. Then we wrote another expression
."int c = ((((a*5)+b)-45)+87);".
.The precedence of multiplication is higher than addition, so the multiplication will
.be done first, but the precedence of addition and subtraction is the same. So here,
.we will check the associativity, which is "left-to-right." Therefore, the addition 
.is performed first, and then subtraction is performed.*/


#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //int a = 34; 
    //cout<<"The value of a was: "<<a;
    //a = 45; 
    //cout<<"The value of a is: "<<a;

    // Constants in C++
   // const int a = 3;
   //  cout<<"The value of a was: "<<a<<endl;
   // a = 45; // You will get an error because a is a constant
    //cout<<"The value of a is: "<<a<<endl;


    // Manipulators in C++
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // // Operator Precedence
    // int a = 3, b = 4;
    // // int c = (a*5) + b;
    // int c = ((((a * 5) + b) - 45) + 87);
    // cout << c;
    return 0;
}
