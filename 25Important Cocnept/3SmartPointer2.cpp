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
    // ************* UNIQUE POINTER *********************//
    unique_ptr<A> p1(new A);
    p1->func();
    cout << "ADDRESS OF POINTER  Unique P1 " << p1.get() << endl;

    unique_ptr<A> p2 = move(p1);
    p1->func();
    cout << "ADDRESS OF POINTER after moving  Unique P1 to P2 " << p1.get() << endl;
    p2->func();
    cout << "ADDRESS OF POINTER Unique P2 " << p2.get() << endl;

    // ************* SHARED POINTER *********************//

    shared_ptr<A> p3(new A);
    p3->func();
    cout << "ADDRESS OF POINTER  shared P3 " << p3.get() << endl;

    shared_ptr<A> p4 = p3;
    p3->func();
    cout << "ADDRESS OF POINTER after sharing shared P3 " << p3.get() << endl;
    p4->func();
    cout << "ADDRESS OF POINTER shared P3 " << p4.get() << endl;

    //***  DIFFERNEC **//
    // this are the smart pointers
    // 1 is unique ptr this pointer is unique u cannot make a copy of this pointer it can be only move . using move func.
    // 2nd shared pointer can be used to make a cop of it.
    return 0;
}