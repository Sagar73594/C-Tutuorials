// ----------------------------------------Pure virtual function and abstract class in C++------------------------------------------
#include <iostream>
using namespace std;

class shape
{
protected:
    float l;

public:
    void getdata()
    {
        cout << "Enter the radius or length" << endl;
        cin >> l;
        cout << "The radius or length is" << endl;
    }
    virtual float area() = 0; // this called pure virtual function 
};

class circle : public shape
{
public:
    float area() // here wa area definig it .
    {
        return (l * l * 3.14);
    }
};
class square : public shape
{
public:
    float area()
    {
        return (l * l);
    }
};

int main()
{
    circle o1;
    o1.getdata();
    cout << o1.area() << " Circle area " << endl;
    square o2;
    o2.getdata();
    cout << o2.area() << " Square area " << endl;
    return 0;
}