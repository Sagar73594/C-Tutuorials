// -------------------program for demo#1 of using virtual functions
#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun()
    {
        cout << "fun of base" << endl;
    }
};
class derived : public base
{
public:
    void fun()
    {
        cout << "fun of derived" << endl;
    }
};
int main()
{
    derived d;
    d.fun();
    base *ptr = &d;
    ptr->fun();
}

// NOTE:- as here we are making a pinter of base class and object of derived class thats why we used virtual so late binding occur and derived class function get exected as in pointer the derived class object is there.