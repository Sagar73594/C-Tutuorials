#include <iostream>
using namespace std;
class shape
{

public:
    int length;
    int breadth;
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
    int area(shape *s)
    {
        return s->area();
    }
    int area2(shape s)
    {
        return s.area();
    }
};

int main()
{
    shape s1(5, 10);
    rectangle r1;
    cout << r1.area2(s1) << endl;
    shape s2 = s1;
    s2.length = 50;
    rectangle r2;
    cout << r2.area2(s2) << endl;

    cout << r1.area2(s1) << endl;

    // ------------------------------IMPORTANT----------------------------------------------------//
    //1. Here weh ave created a refernce of s1 and s2.
    //2. and  here s2 = s1.
    //3. so if we chnage in s2 it will reflect in s2.
    //4. as both are thr refernce od the smane object in heap.

    // shape *s1 = new shape(5, 10);
    // rectangle r1;
    // cout << r1.area(s1) << endl;
    // shape *s2 = s1;
    // s2->length = 80;
    // rectangle r2;
    // cout << r2.area(s2) << endl;
    // cout << r1.area(s1) << endl;
}