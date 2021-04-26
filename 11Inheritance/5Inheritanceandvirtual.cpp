#include <iostream>
using namespace std;
class base
{
protected:
    int val;
};

class derived1 : virtual public base
{
public:
    derived1()
    {
        val = 1;
    }
};
class derived2 : virtual public base
{

public:
    derived2()
    {
        val = 2;
    }
};
class derived3 : public derived2, public derived1 // here the right most get more perfence.
{

public:
    // int val = 3;
    void printdata()
    {
        // derived class virtual then there will be no problem of ambiguity.
        cout << "The value of int is" << val << endl;
    }
};

int main()
{
    derived3 ob1;
    ob1.printdata();

    return 0;
}