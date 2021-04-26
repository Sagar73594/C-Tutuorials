// ********************* PRIMITIVE TYPE TO CLASS TYPE CONVERSION ***************************//
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex()
    {
    }
    complex(int k)
    {
        a = k;
        b = 0;
    }
    void setdata(int x, int y)
    {
        a = x;
        y = b;
    }
    void printdata()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    complex c1;
    int x = 5;
    c1 = 6;
    c1.printdata();
    return 0;
}