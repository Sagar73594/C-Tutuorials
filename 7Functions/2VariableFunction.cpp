#include <iostream>
#include <cstdarg> // the cstdarg this libary is used to for the variable function.
using namespace std;

int func(int, ...); // this is the way u have to declare the variable function for the variable arguments. this three dot ... plays an important role in this the first argumnet will alawys be the number of elemt in the function that count.

int main()
{
    cout << "The avargae marks of Class 9 - A is " << func(5, 10, 20, 30, 40, 50) << endl; // the first argument in the function must always be the number of the elements in the function. like here first numbner is 5 it shows there total 5 argument of which we want the average.
    cout << "The avargae marks of Class 9 - B is " << func(8, 5, 8, 7, 10, 20, 30, 40, 50) << endl;
    cout << "The avargae marks of Class 9 - C is " << func(3, 10, 20, 50) << endl;
    return 0;
}
int func(int count, ...) // function defintion.
{

    int sum = 0;
    va_list list; // first step create list of any name for this use the function va_list.
    va_start(list, count); // the second step is to connet the list with the number of count by va_start.

    for (int i = 0; i < count; i++)
    {
        int n = va_arg(list, int); // the va_ arg this step intialize the first element to the variable u want.
        sum = sum + n;
    }

    return sum;
}

