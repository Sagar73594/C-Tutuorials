// ********************* CLASS TYPE TO PRIMITIVE TYPE CONVERSION ***************************//
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void printdata()
    {
        cout << a << " " << b << endl;
    }

//******************* CASTING OPETOR **********************//
    operator int()
    {
        return (a);
    }
};

int main()
{
    complex c1;
    int x;
    c1.setdata(2, 3);
    c1.printdata();
    x = c1; // x = c1.operator int();
    cout << x << endl;
    return 0;
}
