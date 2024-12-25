#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    cout << "Initial values: a = " << a << ", b = " << b << ", c = " << c << endl;
           //Initial values: a = 5, b = 10, c = 15
    cout << "a++ = " << a++ << endl;//a++ = 5
    cout << "++a = " << ++a << endl;//++a = 7
    cout << "b-- = " << b-- << endl;//b-- = 10
    cout << "--b = " << --b << endl;//--b = 8

    cout << "a % b = " << a % b << endl;//a % b = 7
    cout << "c % a = " << c % a << endl;//c % a = 1

    a = 7;
    b = 3;
    c = 12;

    cout << "Updated values: a = " << a << ", b = " << b << ", c = " << c << endl;
        //Updated values: a = 7, b = 3, c = 12
    cout << "a++ + b = " << a++ + b << endl;//a++ + b = 10
    cout << "++a + b = " << ++a + b << endl;//++a + b = 12
    cout << "c-- - a = " << c-- - a << endl;//c-- - a = 5
    cout << "--c - a = " << --c - a << endl;//--c - a = 3

    cout << "a % b = " << a % b << endl;//a % b = 2
    cout << "c % a = " << c % a << endl;//c % a = 2

    return 0;
}







