// Basic I/O IN C++:
//.C++ comes with libraries which help us in performing input/output.In C++ sequence
//..of bytes corresponding to input and output are commonly known as stream.

// INPUT STREAM:
//.Direction of flow of bytes takes place from input device(for example Kryboard) to
//.. the main memory.

// OUTPUT STREAM:
//.direction of flow of bytes takes place from main memory to the output device
//..(for example Display)

// LIST OF RESERVED KEYWORDS IN C++:
// .This is a list of keywords reserved in C++.
// .Since they are used by the languge itself,these keywords are not available for
// .. re-definition or overloading.
// .In short,you cannot creat a variable with these names.

// 1. alignas,
// 2. alignof,
// 3. and,
// 4. and_eq,
// 5. asm,
// 6. atomic_cancel,
// 7. atomic_commit,
// 8. atomic_noexcept,
// 9. auto,
// 10. bitand,
// 11. bitor,
// 12. bool,
// 13. break,
// 14. case,
// 15. catch,
// 16. char,
// 17. char16_t,
// 18. char32_t,
// 19. class,
// 20. compl,
// 21. concept,
// 22. const,
// 23. const_cast,
// 24. constexpr,
// 25. constinit,
// 26. continue,
// 27. co_await,
// 28. co_return,
// 29. co_yield,
// 30. decltype,
// 31. default,
// 32. delete,
// 33. do,
// 34. double,
// 35. dynamic_cast,
// 36. else,
// 37. enum,
// 38. explicit,
// 39. export,
// 40. extern,
// 41. false,
// 42. float,
// 43. for,
// 44. friend,
// 45. goto,
// 46. if,
// 47. inline,
// 48. int,
// 49. long,
// 50. mutable,
// 51. namespace,
// 52. new,
// 53. noexcept,
// 54. not,
// 55. not_eq,
// 56. nullptr,
// 57. operator,
// 58. or,
// 59. or_eq,
// 60. private,
// 61. protected,
// 62. public,
// 63. register,
// 64. reinterpret_cast,
// 65. requires,
// 66. return,
// 67. short,
// 68. signed,
// 69. sizeof,
// 70. static,
// 71. static_assert,
// 72. static_cast,
// 73. struct,
// 74. switch,
// 75. synchronized,
// 76. template,
// 77. this,
// 78. thread_local,
// 79. throw,
// 80. true,
// 81. try,
// 82. typedef,
// 83. typeid,
// 84. typename,
// 85. union,
// 86. unsigned,
// 87. using,
// 88. virtual,
// 89. void,
// 90. volatile,
// 91. wchar_t,
// 92. while,
// 93. xor,
// 94. xor_eq

/*..Data Type Size and Range in C++ (for 64-bit G++)

| Data Type               | Size (in bytes) | Range                           |
|-------------------------|------------------|---------------------------------|
| short int               | 2               | -32,768 to 32,767              |
| unsigned short int      | 2               | 0 to 65,535                    |
| int                     | 4               | -2,147,483,648 to 2,147,483,647|
| unsigned int            | 4               | 0 to 4,294,967,295             |
| long int                | 4               | -2,147,483,648 to 2,147,483,647|
| unsigned long int       | 4               | 0 to 4,294,967,295             |
| long long int           | 8               | -(2^63) to (2^63)-1            |
| unsigned long long int  | 8               | 0 to 18,446,744,073,709,551,615|
| signed char             | 1               | -128 to 127                    |
| unsigned char           | 1               | 0 to 255                       |
| float                   | 4               | ~3.4E-38 to ~3.4E+38           |
| double                  | 8               | ~1.7E-308 to ~1.7E+308         |
| long double             | 12 or 16        | ~3.4E-4932 to ~1.1E+4932       |
| wchar_t                 | 2 or 4          | 1 wide character               |*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; // '<<' is called insertion operator.
    cin >> num1;
    cout << "Enter the value of num2:\n"; // '>>' is called extraction operator.

    cin >> num2;

    cout << "The sum is " << num1 + num2 << endl;

    return 0;
}