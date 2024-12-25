// what will be the output of the program

#include <iostream>
using namespace std;

int main() {
    int age = 25;
    double height = 5.9;
    string name = "Alice";
    char myChar = '1';

    cout << "myChar:" << myChar << endl;
    // myChar:1

    cout << "Name: " << name << endl;
    // Name: Alice

    cout << "Age: " << age << endl;
    // Age: 25

    cout << "Height: " << height << " feet" << endl;
    // Height: 5.9 feet

    age = 30;
    height = 6.1;
    name = "Bob";

    cout << "Updated Name: " << name << endl;
    // Updated Name: Bob

    cout << "Updated Age: " << age << endl;
    // Updated Age: 30

    cout << "Updated Height: " << height << " feet" << endl;
    // Updated Height: 6.1 feet

    return 0;
}