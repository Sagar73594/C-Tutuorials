// -------------------------------------- REFRENCE ------------------------------------
#include <iostream>
using namespace std;

int main()

{
    int x = 10;
    int &y = x; // here y is refernce of x and also x and y has same address.
    cout << x << endl;
    cout << y << endl;
    x++;
    y++;
    cout << x << endl;
    cout << y << endl;
    return 0;
}