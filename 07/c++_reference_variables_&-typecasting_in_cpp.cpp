#include<iostream> 

using namespace std;

int c = 45; // Global variable

int main(){
    
    // ************* Build-in Data Types ****************
    // Uncomment to use
    /*
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;
    */

    // ************* Float, double and long double Literals ****************
    // Uncomment to use
    /*
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  
    */

    // ************* Reference Variables ****************
    // Uncomment to use
    /*
    float x = 455;
    float & y = x; // y is a reference to x
    cout<<x<<endl;
    cout<<y<<endl;
    */

    // ************* Typecasting ****************
    int a = 45;   
    float b = 45.46;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    int c = int(b); // Typecast b to int and assign it to c

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}





/* C++ REFERENCE VARIABLE & AND TYPECASTING: 
   . In this C++ tutorial, we will discuss the reference variables and typecasting. In 
   . our last lession, we discussed the header files and operator in C++.These are the 
   . topics which we are going to cover in this tutorial:

   .# BUILT-IN DATA TYPES:
   .# FLOAT, DOUBLE AND LONG DOUBLE:
   .# LITERALS
   .# REFERENCE VARIABLES
   .# TYPECASTING */

// BUILT-IN DAtA TYPES:
/* .AS discussed in our pervious lectures, built-in data types are pre-defined by the
   .language and can be used directly. An example program for built-in data types is:*/

// #include<iostream>
// using namespace std;

// int c= 45;

// int main (){
//     int a, b, c;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"enter the value of b:"<< endl;
//     cin>>b;
    
//     c= a + b;
//     cout<< "The sum is "<<c<<endl;
//     cout<< "The global c is "<<::c;


/* .The code of built- in data types can be seen where we have declared three variables
   ."a, b,and c" inside the main function and one variables "c" outside the main function
   .which is a globa variable.To  access the value of the global variable"c," we use 
   .scope resolution operator "::" with the "c" variable. The output of the program is;
   
  #.Enter the value of a:
    5
  #.Enter the value of b:
    9
  #.The sum is 14
  #.The global v is 45
  
  .As we have enterd the value of the variables "a" as five and "b" as 6, it gives
  .us the sum 14, but for global variable, it has given us the value 45.*/



/*#.FLOAT, DOUBLE AND LONG DOUBLE LITERALS:
   .the main reason to discuss these literals was to tell you an important concept about
   .them. The float, double and long double literals program is  */


/*
float d= 34.4f;
long double e =34.4L;
cout<<"The size of 34.4 is "<< sizeof9(34.4)<<endl;
cout<<"The size of 34.4f is "<< sizeof9(34.4f)<<endl;
cout<<"The size of 34.4F is "<< sizeof9(34.4F)<<endl;
cout<<"The size of 34.41 is "<< sizeof9(34.41)<<endl;
cout<<"The size of 34.4L is "<< sizeof9(34.4L)<<endl;

.So the crucial concept which i am talking about is that in C++ laguage, double is
.the default type given to a decimal literal (34.4 is double by default and not float),
.so to use it as float, you have to specify it like "34.4F,".To display the size 
.of float, double, and long double literals, we have used a "sizedof" operator.The 
.output of this program is 

.The size of 34.4 is 8
.The size of 34.4f is 4
.The size of 34.4F is 4
.The size of 34.41 is 12
.The size of 34.4L is 12
.The value of d is 34.4
.The value of e is 34.4
 */

/* 
#.REFERENCE VARIABLE:
 A reference variable is another name for an already existing variable,
 also known as an alias. For example, suppose we have a variable named 
 "sum" and want to use the same variable with the name "add." To do this,
  we create a reference variable called "add." The example code for the reference
  varibles is 
  float x =455;
  float & y = x;
  cout<<x<<endl;
  cout<<y<<endl;
  As shown in ,we have initialized a variable "x" with the value "455".Then we assigned
  the value of "x" to a reference variable "y".The ampersand "&" symbol is used with the
  "y" variable to make it reference variable.Now the variable "y" will start referring 
  to the value of the variables "x"
  The output for the above "x" and "y" is 
  455
  455
*/
/*
.TYPECASTING:
.Typecasting can be defined as converting one data type into another.
.Example code for type casting is 

// *******TYPECASTING******
int a =45;
float b =45.46;
cout<<"the value of a is " <<(float)a<<endl;
cout<<"the value of a is " <<(float)a<<endl;

cout<<"the value of b is " <<(int)b<<endl;
cout<<"the value of b is " <<(int)b<<endl;
int c = int(b);

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int<<endl;
cout<<"The expression is "<<a + (int)b<<endl;


As shown in ,we have initialized two variables, integer "a" and float "b".After that,
we converted an integer variable "a" into a float variable and float variable "b" into
an integer variable.In C++, there are two ways to typecast a variable, either using 
"(float)a" or using "float(b)".
The output for the above program is 

The value of a is 45
The value of a is 45
The value of b is 45
The value of b is 45
The expression is 90.46
The expression is 90
The expression is 90

*/






































