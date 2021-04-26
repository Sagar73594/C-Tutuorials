// -------------------------------------------program for creating structure and class--------------------------------------------

#include <iostream>
using namespace std;

class demo
{
public:
    int x;
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    demo d;
    d.x = 10;
    d.y = 20;
    d.display();
}