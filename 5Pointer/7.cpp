#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    char ch = 'g';
    char *ptr = &ch;
    ch++;
    cout << ptr << endl;  // this will print untill it doesnt get Nullpointer
    cout << *ptr << endl; // this will print the value at the address. only g.

    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl; // XYZ Answer

    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0]; // h  h Answer
}