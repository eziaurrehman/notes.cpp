/*
**C++ Control Structures, If Else and Switch-Case Statement: 
In this series of our C++ tutorials, we will visualize the control structure, 
if-else, and switch statements in the C++ language in this lecture. In our last lesson,
we discussed the constant, manipulators, and operator precedence in C++.  

 In this C++ tutorial, the topics which we are going to cover today are given below:  

- Control Structures in C++  
- IF Else in C++  
- Switch Statement in C++  

**Control Structures in C++**  
  The work of control structures is to give flow and logic to a program. There are
  three types of basic control structures in C++.  

1. **Sequence Structure**  
     Sequence structure refers to the sequence in which programs execute instructions
     one after another. An example diagram for the sequence structure is shown below.

      sequence structure
          ↓ entry
        Action1 
          ↓
        Action2
          ↓
        Exit  


2. **Selection Structure**  
     Selection structure refers to the execution of instructions according to the 
     selected condition, which can be either true or false. There are two ways to
     implement selection structures: by “if-else statements” or by “switch case
     statements”. An example diagram for selection structure is shown below.

        selection structure
              ↓
     ↓ true----contd-----false ↓
     ↓                       ↓
    A1                       A2
     ↓                       ↓
     ↓---------     ---------↓
                  ↓
                  ↓
                 Exit
                 


3. **Loop Structure**  
      Loop structure refers to the execution of an instruction in a loop until the 
      condition gets false. An example diagram for loop structure is shown   

  

**If Else Statements in C++**: 
  As we have discussed the concepts of the different control structures, If Else 
  statements are used to implement a selection structure. An example program for 
  if-else is below. 

  int age;
  cout<< "Tell me your age" <<endl;
  cin>>age;
  if(age<18){
     cout<<"You can not come to my party"<<endl;
        
  }
  else if(age==18){
      cout<<"You are a kid and you will get a kid pass to the party"<<endl;

  }
  else{
      cout<<"You can come to the party"<<endl;
  } 

  As shown in, we declared a variable “age” and used the “cin" function to get its 
  value from the user at runtime. At line 10, we have used the "if” statement and 
  given a condition “(age<18)” which means that if the age entered by the user is 
  smaller than "18,” the output will be “you cannot come to my party.” But if the
  age is not smaller than “18,” the compiler will move to the next condition.  

  At line, we have used the “else if” statement and given another condition 
 “age==18" which means that if the age entered by the user is equal to "18,” the
  output will be “you are a kid and you will get a kid pass to the party.” 
  But if the age is not equal to “18,” the compiler will move to the next condition.  

  At line, we have used the “else" condition which means that if none of the above 
  conditions is "true,” the output will be "you can come to the party.”  

  The output for the following program is:
    Tell me your age 
    81 
    You can come to the party

  As can be seen in, when we entered the age "81" which was greater than 18, it gave
  us the output "you can come to the party.” The main thing to note here is that we 
  can use as many “else if” statements as we want.  

**Switch Case Statements in C++**: 
  In switch-case statements, the value of the variable is tested with all the cases. 
  An example program for the switch-case statement is.

  switch(age)
  {
  case 18:
      cout<<"You are 18"<<endl;
      break;
  case 22:
      cout<<"You are 22"<<endl;
      break;
  case 2:
      cout<<"You are 2"<<endl;
      break;

  default:
  cout<<"No special cases"<<endl;
      break;
  
  }  

  

  As shown in, we passed a variable “age” to the switch statement. The switch 
  statement will compare the value of variable “age" with all cases. For example, if 
  the entered value for variable "age” is “18,” the case with value “18” will be 
  executed and prints “you are 18.” The keyword “break" will let the compiler 
  skip all other cases and go out of the switch-case statement. An output of the 
  above program is: 

  Switch Case Statement Program Output*:
  Tell me your age 
  18
  You are 18
  Done with switch case

As shown in, we entered the value “18” for the variable “age," and it gave us an 
output "you are 18” and “Done with switch case.” The main thing to note here is that 
after running the “case 18,” it skips all the other cases due to the “break” 
statement and printed “Done with switch case,” which was outside of the 
switch-case statement.*/





/*
#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutorial 9";
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // 1. Selection control structure: If else-if else ladder
    if((age<18) && (age>0)){
       cout<<"You can not come to my party"<<endl;
    }
     else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
     }
     else if(age<1){
         cout<<"You are not yet born"<<endl;
    }
     else{
         cout<<"You can come to the party"<<endl;
     }



    // 2. Selection control structure: Switch Case statements

    
    // switch (age)
    // {
    // case 18: 
    //     cout<<"You are 18"<<endl;
    //     break;
    // case 22: 
    //     cout<<"You are 22"<<endl;
    //     break;
    // case 2: 
    //     cout<<"You are 2"<<endl;
    //     break;

    // default:
    //     cout<<"No special cases"<<endl;
    //     break;
    // }

    // cout<<"Done with switch case";
    return 0;*/

