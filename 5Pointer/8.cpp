
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print1(int *p)
{
    cout << *p << endl;
}
void print(int **p)
{
    **p = **p + 1;
}
void inc(int *p)
{
    *p = *p + 1;
}

int main()
{
    int i = 10;
    int *p = &i;
    cout << p << endl;
    print(&p);
    inc(p);
    cout << i << endl;

    int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++ + 4;           // it will increase 100 to 101 but it value will be 100 here only +4.
    cout << a << " " << b << endl; // 101 104
}