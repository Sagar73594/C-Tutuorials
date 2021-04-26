#include <iostream>
using namespace std;
class Y; //[1] we have to declare the class y  at top as the compile checks from the top so it get the point that there is calss Y below.
class X
{
private:
    int a;

public:
    X(int a)
    {
        this->a = a;
    }

    friend int add(X, Y); //[2] this way we make friend to class X to the add function.
};

class Y
{
private:
    int b;

public:
    Y(int b)
    {
        this->b = b;
    }

    friend int add(X, Y);
};

int add(X o1, Y o2) // [3] here we are definig the function by using X and y the two classes name and the o1 and o2 are the varibale here x and y work as a data type.
{
    return o1.a + o2.b;
}

int main()
{
    X x(1);
    Y y(2);

    cout << "The sum of Class X data + Class Y data is  =  " << add(x, y);
    return 0;
}
