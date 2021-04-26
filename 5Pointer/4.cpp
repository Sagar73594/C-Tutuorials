// // #------------------------------------------------- POINTER ARITHMETIC-----------------------------------------------
// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5] = {2, 4, 6, 8, 10};
//     int *p = A, *q = &A[4];
//     cout << *p << endl;
//     p++;
//     cout << *p << endl;
//     p--;
//     cout << *p << endl;
//     cout << p << endl;
//     cout << p + 2 << endl;
//     cout << *p << endl;
//     cout << *(p + 2) << endl;
//     cout << q - p << endl;
//     cout << p - q << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void swap(char **x, char **y)
// {
//     cout << x << " " << y << endl;
//     char *t = *x;
//     *x = *y;
//     *y = t;
//     cout << x << " " << y << endl;
// }

// void swap2(char *x, char *y)
// {
//     cout << x << " " << y << endl;
//     char *t = x;
//     x = y;
//     y = t;
//     cout << x << " " << y << endl;
// }

// int main()
// {
//     char *x = "geeksquiz";
//     char *y = "geeksforgeeks";
//     char *t;

//     cout << "adddress of " << &x << "  addresss of y " << &y << endl;
//     cout << "adddress of " << x << "  addresss of y " << y << endl;
//     cout << "value of " << x[0] << "  value of y " << y[0] << endl;
//     cout << "adddress of " << &x[0] << "  addresss of y " << &y[0] << endl;
//     swap(&x, &y);
//     swap2(x, y);
//     cout << x << " " << y;
//     t = x;
//     x = y;
//     y = t;
//     cout << " " << x << " " << y;

//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

// void swap2(char *x, char *y)
// {
//     cout << x << " " << y << endl;
//     char t[];
//     x = y;
//     y = t;
//     cout << x << " " << y << endl;
// }

int main()
{
    char x[] = "geeksquiz";
    char y[] = "geeksforgeeks";
    char t[20];

    cout << "adddress of " << &x << "  addresss of y " << &y << endl;
    cout << "adddress of " << x << "  addresss of y " << y << endl;
    cout << "value of " << x[0] << "  value of y " << y[0] << endl;
    cout << "adddress of " << &x[0] << "  addresss of y " << &y[0] << endl;
    // swap2(x, y);
    cout << x << " " << y;
    strcpy(x, t);
    strcpy(y, x);
    strcpy(t, y);
    cout << " " << x << " " << y;

    return 0;
}