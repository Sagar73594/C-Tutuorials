///*********************************************************[3]Overloading Assignment (=) Operator in C++ ******************************************
#include <iostream>
using namespace std;
class Sample
{
private:
    int x;
    int y;

public:
    Sample() {}
    Sample(int a, int b)
    {
        x = a;
        y = b;
    }
    Sample(Sample &s)
    {
        cout << "Copy Constructor Called" << endl;

        x = s.x;
        y = s.y;
    }
    void operator=(Sample &m)
    {
        cout << "Assignment Operator Called" << endl;
        x = m.x;
        y = m.y;
    }
    void showdata()
    {
        cout << x << "  & " << y << endl;
    }
};

int main()
{
    Sample s1(4, 5);
    s1.showdata();
    Sample s2; // at the time when we create a object and assign it value then copy constructor called but after making and then we assign then assignment operator called.
    s2 = s1;
    s2.showdata();
    return 0;
}