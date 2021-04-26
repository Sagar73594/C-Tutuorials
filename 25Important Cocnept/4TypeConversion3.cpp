// ********************* CLASS TYPE TO PRIMITIVE TYPE CONVERSION ***************************//
#include <iostream>
using namespace std;
class product
{
private:
    int m, n;
    friend class item;

public:
    void setdata(int x, int y)
    {
        m = x;
        n = y;
    }
    void printdata()
    {
        cout << m << " " << n << endl;
    }

    int getm()
    {
        return (m);
    }
    int getn()
    {
        return (n);
    }
};
class item
{
private:
    int a, b;
    friend class product;

public:
    item()
    {
    }
    item(product p)
    {
        a = p.m;
        b = p.n;
        // a = p.getm();
        // b = p.getn();
    }
    void showdata()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    product p1;
    int x;
    p1.setdata(2, 3);
    p1.printdata();
    item i1;
    i1 = p1;
    i1.showdata();
    return 0;
}
