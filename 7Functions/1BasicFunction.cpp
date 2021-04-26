#include <iostream>
using namespace std;

//[1] Function prototype or function declarton always on the top.
//[2] type function-name (arguments);
// int sum(int a, int b); //[3]--> Acceptable
// int sum(int a, b); //[4]--> Not Acceptable
int sum(int, int); //[5]--> Acceptable this emthod is most efficient.
// void g(void); //[6]--> Acceptable
void g(); //[7]--> Acceptable here for void operation this method is most efficient.

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    //[8] num1 and num2 are actual parameters
    cout << "The sum is " << sum(num1, num2); 
    g();                                    
    return 0;
}

int sum(int a, int b)
{
    //[11] Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHello, Good Morning";
}
