#include <iostream>
using namespace std;


int main()
{
    int a = 5;
    int b = 10;
    double c = 3.5;
    string name = "Charlie";

    cout << "Initial values:\n";//Initial values:
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", name = " << name << endl;
       //a = 5, b = 10, c = 3.5, name = Charlie
    cout << "a++ = " << a++ << " (post-increment)" << endl;//a++ = 5 (post-increment)
    cout << "++a = " << ++a << " (pre-increment)" << endl;//++a = 7 (pre-increment)
    cout << "b-- = " << b-- << " (post-decrement)" << endl;//b-- = 10 (post-decrement)
    cout << "--b = " << --b << " (pre-decrement)" << endl;//--b = 8 (pre-decrement)

    cout << "a % b = " << a % b << endl;//a % b = 7
    cout << "b % a = " << b % a << endl;//b % a = 1

    cout << "Sum of a and b: " << a + b << endl;//Sum of a and b: 15
    cout << "Difference of a and b: " << a - b << endl;//Difference of a and b: 7
    cout << "Product of a and c: " << a * c << endl;//Product of a and c: 24.5
    cout << "Division of a by b: " << a / b << endl;//Division of a by b: 0

    cout << "Hello, " << name << "!\nWelcome to the C++ world.\n"
         << endl;/*Hello, Charlie!
                  Welcome to the C++ world.*/

    cout << "Here are some special characters:\n";//Here are some special characters:
    cout << "Newline character: \\n\n";//Newline character: \n
    cout << "Tab character: \\t\n";//Tab character: \t
    cout << "Backslash character: \\\\\n";//Backslash character: \\
    cout << "Double quote character: \\\"\n";//Double quote character: \"

    a = 7;
    b = 3;
    c = 2.5;
    name = "Alex";

    cout << "\nUpdated values:\n";//Updated values:
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", name = " << name << endl;
          //a = 7, b = 3, c = 2.5, name = Alex
    cout << "a++ + b = " << a++ + b << " (post-increment)" << endl;
        //a++ + b = 10 (post-increment)
    cout << "++a + b = " << ++a + b << " (pre-increment)" << endl;
        //++a + b = 11 (pre-increment)
    cout << "c-- - a = " << c-- - a << " (post-decrement)" << endl;
        //c-- - a = -4.5 (post-decrement)
    cout << "--c - a = " << --c - a << " (pre-decrement)" << endl;
        //--c - a = -5.5 (pre-decrement)
    cout << "a % b = " << a % b << endl;//a % b = 2
    cout << "c % a = " << static_cast<int>(c) % a << endl;//c % a = 1

    return 0;

    






