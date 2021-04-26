//***********************************  SMART POINTERS **********************************************//
#include <iostream>
#include <memory>
using namespace std;

struct A
{
    void func()
    {
        cout << "I am in the struct...." << endl;
    }
};

int main()
{
    // ************* NORMAL POINTER *********************//
    A *ptr = new A;
    ptr->func();
    cout << "ADDRESS OF POINTER Normal PTR " << ptr << endl;
    A *ptr2 = ptr;
    ptr2->func();
    cout << "ADDRESS OF POINTER Normal Ptr " << ptr2 << endl;

    // ************* UNIQUE POINTER *********************//

    unique_ptr<A> p1(new A);
    p1->func();
    cout << "ADDRESS OF POINTER  Unique P1 " << p1.get() << endl;

    unique_ptr<A> p2 = move(p1);
    p1->func();
    cout << "ADDRESS OF POINTER Unique P1 " << p1.get() << endl;
    p2->func();
    cout << "ADDRESS OF POINTER Unique P2 " << p2.get() << endl;

    //***  DIFFERNEC **//
    // this are the smart pointers
    // 1 is unique ptr this pointer is unique u canno make a copy of this poointer it can be only move .
    return 0;
}