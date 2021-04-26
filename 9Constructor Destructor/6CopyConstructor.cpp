#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number()
    {
        cout << "Default Constructor called" << endl;
        a = 0;
        b = 0;
    }

    Number(int num1, int num2)
    {
        cout << "Paramterized Constructor called" << endl;
        a = num1;
        b = num2;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    // for copy constructor we have to use & as the obj here is pass by refrence from the main func.
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        this->a = obj.a;
        this->b = obj.b;
    }

    void display()
    {
        cout << "The value for this object is " << a << " " << b << endl;
    }
};
int main()
{
    // Number x, y, z2;
    Number z(45, 56);
    // x.display();
    // y.display();
    // z.display();

    // Number z1(z); // Copy constructor invoked
    // z1.display();

    // z2 = z; // Copy constructor not called here copy asignment operator is called.
    // z2.display();

    // Number z3 = z; // Copy constructor invoked here we have make the z3 inline and also assgin z ti ot thats why its called copy constructor.
    // z3.display();

    // z1 should exactly resemble z  or x or y
    // For Dynmaically
    // Number *z5 = new Number(z);
    // z5->display();
    // (*z5).display();
    // Number z6(*z5);
    // z6.display();

    // Copy assignment Operator
    Number *z8 = new Number();
    (*z8) = z;
    (*z8).display();

    // Simply for Dynmaic allocated variable de refernce it and then we can assign value to it.

    return 0;
}
