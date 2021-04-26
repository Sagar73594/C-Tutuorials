
//****************************** MAKING A FUCNTION AS A FRIEND**************************//
#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }

    friend void AddandDisplay(complex, complex); // ONLY DECLARTION
};
void AddandDisplay(complex c, complex d)
{
    cout << (c.real + d.real) << " + " << (c.img + d.img) << "i" << endl;
}

int main()
{
    complex c1(3, 4);
    complex c2(3, 4);
    AddandDisplay(c1, c2);

    return 0;
}
