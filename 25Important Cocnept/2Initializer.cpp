//****************** INITIALIZER *******************************
// initializer list is used to initialize data member of a calss.
// the list of memebers to be initialized is indicated with constructor as a cooma separated list followed by a colon.
#include <iostream>
using namespace std;

class Dummy
{
private:
    int a, b;
    const int c;
    int &y;
    // as the rule is there we have to initliazie a const variable at the time of written but in class we can't do it so we have to use initalizer for it. as we can't initliaze a const data in a class we have to use initlaizer for it. it is must.

public:
    // we cannot initilaize a data in private section we have to use constructor or intilazer like below to initilize a data.

    Dummy(int &n) : a(4), b(6), c(7), y(n)
    {
        // a = 5;
        // b = 5;
        // c = 8 here we can't to initalize a const variable.
    }
    void prindata()
    {
        cout << a << " " << b << " " << c<<" "<<y;
    }
};

int main()
{
    int m = 6;
    Dummy d1(m);
    d1.prindata();

    return 0;
}
//******************************** 02 ****************************************//
#include <iostream>
// using namespace std;
// class test
// {
// private:
//     int x;

// public:
//     test(int x = 0) : x(x) // here we have make two type of constructor one  is default and another ome is with value.
//     {
//     }
//     void printadta()
//     {
//         cout << x << endl;
//     }
// };

// int main()
// {
//     test t1(4), t2;
//     t1.printadta();
//     t2.printadta();

//     return 0;
// }