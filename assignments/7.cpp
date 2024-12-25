#include <iostream>
using namespace std;
int main() {
    string name = "Alice";
    int age = 25;
    double height = 5.7;

    cout << "Name:\t" << name << endl;//Name:   Alice
    cout << "Age:\t" << age << endl;//Age:    25
    cout << "Height:\t" << height << " feet" << endl;//Height: 5.7 feet

    cout << "Hello, " << name << "!\nWelcome to the C++ world.\n" << endl;
      //Hello, Alice!
      //Welcome to the C++ world.
    cout << "Here are some special characters:" << endl;//Here are some special characters:
    cout << "Newline character: \\n" << endl;//Newline character: \n
    cout << "Tab character: \\t" << endl;//Tab character: \t
    cout << "Backslash character: \\\\" << endl;//Backslash character: \\
    cout << "Double quote character: \\\"" << endl;//Double quote character: \"

    name = "Bob";
    age = 30;
    height = 6.1;

    cout << "\nUpdated Information:\n";//Updated Information:
    cout << "Name:\t" << name << endl;//Name:   Bob
    cout << "Age:\t" << age << endl;//Age:    30
    cout << "Height:\t" << height << " feet" << endl;//Height: 6.1 feet

    return 0;







