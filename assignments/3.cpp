// what will be the output of the program

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    double c = 2.5;

    cout << "a + b * c = " << a + b * c << endl; // a+b*c = 17.5
    cout << "(a + b) * c = " << (a + b) * c << endl; //(a+b) *c = 25
    cout << "a / b = " << a / b << endl; // a / b = 3
    cout << "a / c = " << a / c << endl; // a / c = 4 
    cout << "a % b = " << a % b << endl; // a % b = 1

    a = 15;
    b = 4;
    c = 3.0;

    cout << "Updated a + b * c = " << a + b * c << endl; //Updated a+b*c = 27
    cout << "Updated (a + b) * c = " << (a + b) * c << endl; //Updated (a + b) * c = 57
    cout << "Updated a / b = " << a / b << endl; // Updated a / b = 3
    cout << "Updated a / c = " << a / c << endl; // Updated a / c = 3
    cout << "Updated a % b = " << a % b << endl; // Updated a % b = 3

    return 0;