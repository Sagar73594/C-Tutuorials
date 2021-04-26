// #---------------------------------------------------- Operators and Realations Operators --------------------------------------------------------------------------------------

// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the you
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators this are are all airthmetiuc opertors used to do airthmetic .
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators  // here w ahbae to use ( ) because the compiler will get confused which value to take so thats why we should use paraenthesis.
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl; // it check weather both the value are eqaul or not.
    cout << "The value of a != b is " << (a != b) << endl; // it check weather both the value are not equal.
    cout << "The value of a >= b is " << (a >= b) << endl; // it will check that a is must be greater or equal to b value.
    cout << "The value of a <= b is " << (a <= b) << endl; // it will check that a is must be smaller than b or equal to b.
    cout << "The value of a > b is " << (a > b) << endl;   // it simply check weather a is greater than b.
    cout << "The value of a < b is " << (a < b) << endl;   // it will check that a is less than b.

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) & (a < b)) << endl; // here both condition must be right then only we can output as 1.
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl; // here one of the condition must be right then we will get output 1.
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;                  // here we have used not operator so if answer is 1 then output will be 0 as we used not opeartor.

    return 0;
}
