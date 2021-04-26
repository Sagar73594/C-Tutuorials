// ---------------------------------------------- STATIC VARIABLE IN FUNCTION -----------------------------------------------

#include <iostream>
using namespace std;



void fun()
{
    static int s = 10; // we can make static variable decalre in a function only but it retain its value it clear from the menory when program terminate.
    s++;
    cout << s << endl;
}
int main()
{
    fun();
    fun();
}