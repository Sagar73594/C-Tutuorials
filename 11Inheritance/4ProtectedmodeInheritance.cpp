// *********************************************************** Acess specifier as Protected****************************************
#include <iostream>
using namespace std;

class Base
{
private:
    void display1()
    {
        cout << "I am in display 1 and i am private" << endl;
    }

protected:
    void display2()
    {
        cout << "I am in display 2 and i am protected" << endl;
    }

public:
    void display3()
    {
        cout << "I am in display 3 and i am Public" << endl;
    }
};

class dervi : protected Base // here the access specifier is protected.
{
public:
    void display4()
    {
        cout << "I am in display 4 and i m in dervi class" << endl;
        display2(); //here we can access the protetced memeber of the base class in the dervi class.
        display3(); // here we can access the public memeber of the base class in the dervi class.
    }
};
class dervi2 : public dervi
{
public:
    void display5()
    {
        cout << "I am in display 5 and i m in dervi2 class" << endl;
        display4();
        display2(); // As display2 and Dipslat3 are inherithed in Base class as a Protected member but we can access them to further derived class.
        display3();
    }
};

int main()
{
    dervi2 d;
    d.display5();
    // d.display1(); // private cannot be access
    // d.display2(); // protectd part cannot be acess
    // d.display3(); // this public part of base class also cannot be accessed now ist is Proteced in Derived class.

    return 0;
}
