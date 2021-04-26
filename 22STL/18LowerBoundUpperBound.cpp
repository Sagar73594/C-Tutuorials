#include <iostream>
#include <algorithm>
using namespace std;

// ------------------- LOWER BOUND -----------------------
int main()
{
    // ----------- it will return the index of eexactly the same value or just greater than it.
    int a[] = {1, 14, 5, 6, 9, 19};
    int size = sizeof(a) / sizeof(a[0]);

    int index = lower_bound(a, a + size, 4) - a;  // this -a actually help us to get the index positon as we got iterator so reducing the begin we get index -- !IMPORTANT
    int index2 = lower_bound(a, a + size, 7) - a; // as no 7 so it will give next immediate upper number than 7 so it give index 9 that is 4.  -- !IMPORTANT
    int index3 = lower_bound(a, a + size, 109) - a;
    int index4 = lower_bound(a, a + size, 0) - a;
    cout << "Total Size Of tha array is " << size << endl;
    cout << a[index] << endl;
    cout << a[index2] << endl;
    cout << a[index3] << endl;
    cout << a[index4] << endl;

    //UPPER BOUND ALWAYS GIVES THE NEXT IMMEDIATE NUMBER OF WHAT WE SEARCH.
    int index11 = upper_bound(a, a + size, 4) - a;
    int index21 = upper_bound(a, a + size, 1) - a;
    int index31 = upper_bound(a, a + size, 101) - a;
    cout << "Total Size Of tha array is " << size << endl;
    cout << a[index11] << endl;
    cout << a[index21] << endl;
    cout << a[index31] << endl;

    // int a[] = {7, 11};
    // int size = sizeof(a) / sizeof(a[0]);

    // int index = lower_bound(a, a + size, 10) - a;
    // int index11 = upper_bound(a, a + size, 12) - a; // it will alawys next immendiate elment of what we search .
    // cout << a[index] << endl;
    // cout << a[index11] << endl;

    return 0;
}

//--------------------- OUESTION --1-------------
// int main()
// {
//     int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
//     int size = sizeof(a) / sizeof(a[0]);
//     cout << "Total Size Of tha array is " << size << endl;

//     int index = lower_bound(a, a + size, 9) - a;
//     if (index != size && a[index] == 9)
//     {
//         cout << index << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     index = lower_bound(a, a + size, 6) - a;
//     if (index != size && a[index] == 6)
//     {
//         cout << index << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
//     index = lower_bound(a, a + size, 12) - a;
//     if (index != size && a[index] == 12)
//     {
//         cout << index << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     return 0;
// }
//--------------------- OUESTION 2-------------

// int main()
// {
//     // It will alawys give you next immendiate big elelment to it.
//     int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
//     int size = sizeof(a) / sizeof(a[0]);
//     cout << "Total Size Of tha array is " << size << endl;

//     int index = upper_bound(a, a + size, 4) - a;
//     if (index - 1 >= 0 && a[index - 1] == 4)
//     {
//         cout << index - 1 << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     index = upper_bound(a, a + size, 6) - a;
//     if (index - 1 >= 0 && a[index - 1] == 6)
//     {
//         cout << index - 1 << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
//     index = upper_bound(a, a + size, 10) - a;
//     if (index - 1 >= 0 && a[index - 1] == 10)
//     {
//         cout << index - 1 << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }

//     return 0;
// }