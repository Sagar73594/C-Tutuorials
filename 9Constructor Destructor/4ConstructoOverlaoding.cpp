#include <iostream>
using namespace std;

//********** Constructor Overloading*************************************//
 //[1] the Constructor overloading is same as the function overloading.
// as we can do many things by calling one function same as in the Constructor also we can do many things by one Constructor
// this is all called Constructor Overloading.
class complex
{
private:
    int a, b;

public:
// for the constructor overloading the argument must be different by datatype or number of argument.
    complex() // default Constructor
    {
        a = 0;
        b = 0;
    }

    complex(int x) // parametrized Constructor because here we have pass the arguments to it thats why we calles them paramenrtozed argument.
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;

        b = y;
    }
    void printdata()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{

    complex c1;
    complex c2(4);
    complex c3(6, 8);
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}