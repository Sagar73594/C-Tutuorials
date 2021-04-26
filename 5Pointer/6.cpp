#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// There are two Types of Syrtem
// little Endian the little end wrritten first means last byte is put first
// BIG Endian its vice-versa.

void solve()
{
    int i = 65;
    int *ptr = &i;
    char c = i;               // It is Implictily typecasted to character.
    char *ptr1 = (char *)ptr; // Explicit typecased the int pointer to char Pointer.

    cout << ptr << endl;
    cout << ptr1 << endl; //  cout << *ptr1 << endl; This Both Same for char Pointer cout dont print address it print direct the values.
    cout << *ptr << endl;

    cout << *ptr << endl;
    cout << ptr1 << endl; // Due to little ednian system it print A.
    cout << *(ptr1 + 1) << endl;
    cout << *(ptr1 + 2) << endl;
    cout << *(ptr1 + 3) << endl; // rathen then here.
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}

// Typecasting Question

// #include <iostream>
// using namespace std;

// void updateValue(int *p)
// {
//     *p = 610 % 255;
// }

// int main()
// {
//     char ch = 'A';
//     updateValue((int *)&ch);
//     cout << ch;
// }