// ---------------------------------------------program for Single inheritance---------------------------------------------
#include <iostream>
using namespace std;
class base
{
public:
    int a;
    base()
    {
        a = 1;
    }
    void display()
    {
        cout << "display of base " << a << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "show of derived " << a << endl;
    }
};
int main()
{
    derived d;
    // d.a = 100;
    d.display();
    d.show();
}

// Note:

/* 
 If we dont write the constructor of the derived class and we called a derived class then defualt constructor of derived class
 which compiler make for us that will call the base class constructor 
 automatically .

*/