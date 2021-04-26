// lambda expression to count elements
// divisible by 3.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 18, 30, 10, 12, 45};
    int res = count(v.begin(), v.end(), 10);
    cout << res << '\n';
    return 0;
}
// C++ program for count in C++ STL for
// array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {3, 2, 1, 3, 3, 5, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << n << endl;
//     cout << "Number of times 3 appears : "
//          << count(arr, arr+n, 3);

//     return 0;
// }