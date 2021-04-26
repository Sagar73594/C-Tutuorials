// #---------------------------------------------------- Build in Data Types --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int c = 45;

int main()
{
    // -------------------------------------------------------------INT DATA TYPES---------------------------------------------------------------//

    int a, b, c;

    cout << "enter the value of a:\n"; // [1]  so u can use endll or \n for new space line byt it shuould used properly
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "Total value of a+b = " << c << endl; // [2]  here c is a variable so write c without any single or double quoted <<c like this

    cout << "\nprint the global variable value of C " << ::c << endl; //  [3] here :: this is a symbol of scope resolution opertor it helps to take the value of global variable.

    // -------------------------------------------------------------DOUBLE AND FLOAT DATA TYPES---------------------------------------------------------------//

    float d = 34.4f;       //[4] 34.4f means its a floating value
    long double e = 34.4l; //[5] 34.4l means its a long double number
                           //  [6] 34.4 without any suffix its a default  double value. so use prefix it useful in upcoming programming .
    cout << "The value of d is = " << d << endl
         << "The value of e is = " << e << endl;

    cout << " the size of 34.4 is = " << sizeof(34.4) << endl;   // [7]this a long double as sytem default witbhout suffix it is a long double.
    cout << " the size of 34.4f is = " << sizeof(34.4f) << endl; // [8]this is a float value and float value size is 4. wecan write both the capital and small f.
    cout << " the size of 34.4F is = " << sizeof(34.4F) << endl;
    cout << " the size of 34.4l is = " << sizeof(34.4l) << endl; //[9] this is a long double its size is 12 and also we have to use suffix l here both wil be fine upper and lower case.
    cout << " the size of 34.4L is = " << sizeof(34.4L) << endl;

    // -------------------------------------------------------------TYPECASTING---------------------------------------------------------------//

    int m = 45.;
    float n = 4.5;
    cout << m + n << endl;
    cout << float(m) << endl; //[12] here the type casting is done a is now a float value not a integer any more
    cout << (float)m << endl; //[13] same here also this are the two ways we can do typecasting of the variable.
    cout << int(n) << endl;   //[14] here the type casting is done b is now a int value not a float any more
    cout << (int)n << endl;   //[15] same here also this are the two ways we can do typecasting of the variable.

    cout << m + (int)n << endl; //[16] here the type casting is done now b is not anymore float value now it is a int. so the output will be 49 not 49.5.

    return 0;
}