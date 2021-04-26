#include <bits/stdc++.h>
using namespace std;

int main()
{

    // just larger from smaller to bigger.
    // means 123 then 132 then 213 then 231 like this lexicographical order.
    vector<int> arr{1, 2, 3};
    do
    {
        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));

    // Prev permuation from bigger to smaller.
    // vector<int> arr1{3, 2, 1};
    // cout << endl;
    // do
    // {
    //     for (auto i : arr1)
    //         cout << i << " ";
    //     cout << endl;
    // } while (prev_permutation(arr1.begin(), arr1.end()));
    // vector<int> arr1(3);
    // arr1[1] = 1;
    // arr1[2] = 2;
    // cout << endl;
    // do
    // {
    //     int count = 0;
    //     for (int i = 1; i < 3; i++)
    //     {
    //         if (arr1[i] == i)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             count++;
    //         }
    //     }

    //     if (count == 2)
    //     {
    //         for (auto i : arr1)
    //         {
    //             cout << i << "";
    //         }
    //         break;
    //     }

    // } while (prev_permutation(arr1.begin(), arr1.end()));

    return 0;
}