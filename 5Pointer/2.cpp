//------------------------------------------------  POINTER TO A FUNCTION ---------------------------------------------------------
#include <iostream>
using namespace std;

void display()
{
    cout << "hello";
    return;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    // return type (in the bracket *pointer_name) ( only mention datatype args)
    void (*fp)(); // Declare
    fp = display; // assign
    (*fp)();      // call

    int (*fp2)(int, int);
    (fp2) = max;
    cout << (*fp2)(10, 5);
    fp2 = min;
    cout << (*fp2)(10, 5);

    return 0;
}