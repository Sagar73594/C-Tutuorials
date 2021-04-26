// ---------------------------------------program for this pointer-------------------------------------------------------

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r1(10, 5);
    cout << r1.area() << endl;
}
// Note if the Actual Parameters and Formal Parameters has same name then use this-> opeartor to resolve the name mangling.