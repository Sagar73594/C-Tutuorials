#include <iostream>
using namespace std;
class sum
{
private:
    int x;
    int y;

public:
    sum(int a, int b)
    {
        x = a;
        y = b;
    }
    ~sum() // the constructor is just called before the object destory in the main program as destructor helps us to destroy the space which is created by the new function.
    {
        cout << "Your constructor is destoryed" << endl;
    }
    void showdata()
    {
        int s = x + y;
        cout << this << " for " << s << endl;
    }
};
int main()
{
    sum s(10, 20);
    sum *s1 = new sum(s);
    s1->showdata();
    s.showdata();
    delete s1; // For Dynmaicalyy alloacted Variable we have to explicit deallaocte it . by writing delete keyword infron of it.
    return 0;
}