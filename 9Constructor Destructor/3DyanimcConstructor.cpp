//********************************************DYNAMIC CONSTRUCTOR***********************************
#include <iostream>
using namespace std;
class addition
{
private:
    // both are pointer.
    int *x;
    int *y;

public:
    addition() {}
    addition(int a, int b)
    {
        x = new int; // new keywrod helps to create the it dynamically at run time.
        y = new int; // int type od both data is now created dynamically.
        *x = a;
        *y = b;
    }
    void add()
    {
        int sum;
        sum = *x + *y;
        cout << sum;
    }
};

int main()
{
    addition o1(10, 20);
    o1.add();
    return 0;
}