//-------------------------------------------------program for writing class in c++ for rectangle-----------------------------------------------
#include <iostream>
using namespace std;
class shape
{
    int length;
    int breadth;

public:
    shape(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
class rectangle
{
public:
    int area(shape s)
    {
        return s.area();
    }
};

int main()
{
    shape s1(5, 10);
    rectangle r1;
    cout << r1.area(s1);
}