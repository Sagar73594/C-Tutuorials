// --------------------------------------program for friend function
#include <iostream>
using namespace std;

class test
{
private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun(); // declartion
};

//---- Fun() is friend class
void fun()
{
    test t;
    t.a = 10;
    t.b = 15;
    t.c = 9;

    cout << t.a << " " << t.b << " " << t.c << endl;
}

int main()
{
    fun();

    return 0;
}
