//------------------------------------ Using pointer of base class and inserting address of derived class in it---------------------------------
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base class cosntrcutor" << endl;
    }
    virtual void fun() // late binding
    {
        cout << "Base class fun " << endl;
    }
    virtual ~base() // late binding
    {
        cout << "Base class destructor called " << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "derived class cosntrcutor" << endl;
    }
    void fun()
    {
        cout << "derived class fun " << endl;
    }
    ~derived()
    {
        cout << "derived class destructor called " << endl;
    }
};

int main()
{ // this is why we use virtual destructor as to destroy the first the derived class destruttor then the base class destrcutor the virtual key helps us to late bind the .
    base *d1 = new derived;
    d1->fun();

    delete d1;
    // perfect secnario
    // base *d1 = new base;
    // derived *d2 = new derived;
    // d1->fun();
    // d2->fun();
    // delete d1;
    // delete d2;

    return 0;
}