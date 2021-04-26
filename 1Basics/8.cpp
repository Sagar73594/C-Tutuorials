//-------------------------------------------------------------- ENUM AND TYPEDEF --------------------------------------------------------------------------------
#include <iostream>
using namespace std;
// it is used to define group of connstant in one name.
enum day
{
    mon = 1,
    tue = 5,
    wed,
    thu,
    fri,
    sat,
    sun
};

typedef int marks;
typedef int roll;
int main()
{
    day d;
    d = mon;

    cout << d << endl;
    cout << tue << endl;
    cout << wed << endl;

    marks m1 = 100;
    marks m2 = 89;
    marks m3 = 56;
    roll r1 = 14;
    roll r2 = 15;
    roll r3 = 24;
    cout << m1 << " " << m2 << " " << m3 << endl;
    cout << r1 << " " << r2 << " " << r3 << endl;
    return 0;
}