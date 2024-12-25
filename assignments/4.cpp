// what will be the output of the program


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    double c = 2.5;
    double d = 4.0;

    cout << "a + b * c = " << a + b * c << endl;//a + b * c = 17.5
    cout << "(a + b) * c = " << (a + b) * c << endl;//(a + b) * c = 32.5
    cout << "a / b = " << a / b << endl;//a / b = 3 
    cout << "a / c = " << a / c << endl;//a / c = 4
    cout << "a % b = " << a % b << endl;// a % b =1
    cout << "a + b / d = " << a + b / d << endl;//a + b / d = 10.75
    cout << "(a + b) / d = " << (a + b) / d << endl;//(a + b) / d = 3.25
    cout << "a * b + c / d = " << a * b + c / d << endl;//a * b + c / d = 30.625
    cout << "(a * b + c) / d = " << (a * b + c) / d << endl;//(a * b + c) / d = 8.125

    a = 15;
    b = 4;
    c = 3.0;
    d = 5.0;

    cout << "Updated a + b * c = " << a + b * c << endl;//Updated a + b * c = 27
    cout << "Updated (a + b) * c = " << (a + b) * c << endl;//Updated (a + b) * c = 57
    cout << "Updated a / b = " << a / b << endl;//Updated a / b = 3
    cout << "Updated a / c = " << a / c << endl;//Updated  a / c = 5
    cout << "Updated a % b = " << a % b << endl;//Updated a % b = 1
    cout << "Updated a + b / d = " << a + b / d << endl;//Updated a + b / d = 11
    cout << "Updated (a + b) / d = " << (a + b) / d << endl;//Updated (a + b) / d = 6
    cout << "Updated a * b + c / d = " << a * b + c / d << endl;//Updated a * b + c / d = 31
    cout << "Updated (a * b + c) / d = " << (a * b + c) / d << endl;//Updated (a * b + c) / d = 17

    return 0;
}








