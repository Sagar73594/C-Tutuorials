//*********************************************************** Acess specifier as Public ****************************************
#include <iostream>
using namespace std;

class Base
{
private:
    void display1() // this cannot be accessed
    {
        cout << "I am in display 1 and i am private" << endl;
    }

protected: // this can be accessed but cannot access directly from main func.
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

class dervi : public Base // here the access seprcifier is public .
{
public:
    void display4()
    {
        display2(); // here we can access the protetced memeber of the base class on the dervi class. because the protected memeber becomes public member but it can only acess in the dervi calss iteslf only.
        cout << "I am in display 4 and i m in dervi class" << endl;
    }
};

int main()
{
    dervi d;
    // d.display1(); // private cannot be inheritaed
    // d.display2(); // protectd part cannot be acess through dervi calass
    d.display3();
    d.display4();

    return 0;
}
