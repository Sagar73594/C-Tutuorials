// #---------------------------------------------------- SCOPE OF VARIABLE --------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int glo = 6; // [1] here the glo is global varibale and its hold value 6.
void sum()   // [2] here the function sum which return type is void here the value a will be 6 as the
{
    int a;
    cout << glo; // here we will get the global value as there is no loacl variable so the precedence of local varibale is higher than global variable.
}

int main()
{
    // int glo=9; //[3] the local varibale precdence is higher than the local variable so the value of glo will be 9/
    // glo=78;
    // int a = 14; //[4] this way to declare a varibale and define it
    // int b = 15;
    int a = 14, b = 15;                                                                           //  [5]this also another methid to declare the varibale in single line only.
    float pi = 3.14;                                                                              // [6] this declartion of float value
    char c = 'd';                                                                                 // [7] this declartion of char type value and car value must in ' '.
    bool is_true = false;                                                                         // [8] this declartion of boolean value the boolean will give only two output 1 or 0 for true 1 and for false it will be 0.
    sum();                                                                                        // [9] here the calling of function is done for main.
    cout << "This is tutorial 4.\nHere the value of a is  " << a << ".\nThe value of b is " << b; // [10] here the to print value of a we should write without any double quote for output << use the variable name.
    cout << glo << is_true;
    cout << ".\nThe value of pi is: " << pi;
    cout << ".\nThe Character of c hold character is :- " << c //[11] semicoln is used to terminate here i dont use her the semicolon here in the next line with the use << opertor i addded the bot lone and then i put the semicilon to terminate the line.
         << ".";
    return 0;
}
