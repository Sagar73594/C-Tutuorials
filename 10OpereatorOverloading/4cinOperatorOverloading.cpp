#include <iostream>
using namespace std;
class Complex
{
private:
    int x;
    int y;

public:
    Complex(int z = 0) : x(z), y(z)
    {
    }
    void printadta()
    {
        cout << x << " + " << y << "i" << endl;
    }
    friend istream &operator>>(istream &din, Complex &ob1);
};
istream &operator>>(istream &din, Complex &ob1)
{
    din >> ob1.x >> ob1.y;
    return din;
}

int main()
{
    Complex t1, t2;
    cout << "Enter the number" << endl;
    cin >> t1;
    cin >> t2;
    t1.printadta();
    t2.printadta();

    return 0;
}