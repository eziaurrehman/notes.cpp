// Create a simple calculator app using cpp.

// It will take 2 numbers from user.
// Will add, sub, mul, and divide them... 

// Display the results.

#include <iostream>
using namespace std;
int main() {
    
    int num1, num2, result;
   
    
    cout << "Enter numbers 1"<<endl;
    cin >> num1;
    cout<< "Enter number2" <<endl;
    cin>> num2;

    result =  num1+num2;

    cout <<num1 <<"+"<< num2 << "  = " << result;
    cout<< endl;
    cout << "Enter numbers 1"<<endl;
    cin >> num1;
    cout<< "Enter number2" <<endl;
    cin>> num2;

    result =  num1-num2;

    cout <<num1 <<"-" << num2 << "  = " << result;
    cout<< endl;



    cout << "Enter numbers 1"<<endl;
    cin >> num1;
    cout<< "Enter number2" <<endl;
    cin>> num2;

    result =  num1*num2;

    cout <<num1 <<"*" << num2 << "  = " << result;
    cout<< endl;


    cout << "Enter numbers 1"<<endl;
    cin >> num1;
    cout<< "Enter number2" <<endl;
    cin>> num2;

    result =  num1/num2;

    cout <<num1 <<"/" << num2 << "  = " << result;
    cout<< endl;







    




    return 0;
}