// -------------------------------------------------- ALL TYPES OF FUNCTION IN CLASS-----------------------------
// All types of Member Functions
// • Constructors - called when object is created
// • Accessors - used for knowing the value of data members
// • Mutators - used for changing value of data member
// • Facilitator - actual functions of class
// • Enquiry - used for checking if an object satisfies some condition
// • Destructor - used for releasing resources used by object
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength() { return length; } //Accessors
    int getBreadth() { return breadth; } // Accessors
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
Rectangle::Rectangle() //Constructors
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b) //Constructors
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r) //Constructors
{
    length = r.length;
    breadth = r.breadth;
}
void Rectangle::setLength(int l) //Mutators
{
    length = l;
}
void Rectangle::setBreadth(int b) //Mutators
{
    breadth = b;
}
int Rectangle::area() //Facilitator
{
    return length * breadth;
}
int Rectangle::perimeter() //Facilitator
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare() //Enquiry
{
    return length == breadth;
}
Rectangle::~Rectangle() //Destructor
{
    cout << "Rectangle Destroyed";
}

int main()
{
    Rectangle r1(10, 10);
    cout << "Area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "Yes" << endl;
}