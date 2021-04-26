#include <iostream>
using namespace std;
//CLASS same as struct only diffrence is that by (defualt all members are private here). and inplace of struct there is class otherwise all same//
class complex
{
private:
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "+" << b << "i";
    }
};

int main()
{

    complex c1;
    c1.setdata(5, 4);
    c1.display();

    return 0;
}

//-----STRUCTURE COMPLEX in class and strcuture there is only one diffrence is that by (default all member are public) in structure--//
// struct complex
// {
// private:
//     int a;
//     int b;

// public:
//     void setdata(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void display()
//     {
//         cout << a << "+" << b << "i";
//     }
// };

// int main()
// {
//     complex c1;
//     c1.setdata(5, 4);
//     c1.display();

//     return 0;
// }