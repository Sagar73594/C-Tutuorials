// ----------------------------------------------------- FOR EACH LOOP-----------------------------------------------------------------//
#include <iostream>
using namespace std;

// This is called for each loop there is no synatx of each but it called as for each loop.
int main()
{

    int arr[5] = {1, 2, 3, 4, 8};

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    string arr2[5] = {"1", "2", "durgesh", "vishal", "rai"};

    for (auto i : arr2)
    {
        cout << i << " ";
    }

    cout << endl;
    char arr3[5] = {66, 'A', 'B', 90};
    for (auto i : arr3)
    {
        cout << i << " ";
    }
    cout << endl;

    // -----------------------------------------------------To change the actual value so pass by refernce-- ---------------------------------------------------
    int arr4[5] = {1, 2, 3, 4, 8};

    for (auto &i : arr4)
    {
        cout << ++i << " ";
    }
    cout << endl;
    for (auto i : arr4)
    {
        cout << i << " ";
    }
    cout << endl;

    //************************************************ 2D***********************************************

    int A[2][3];

    for (auto &x : A)
    {
        for (int &y : x)
        {
            cin >> y;
        }
        cout << endl;
    }

    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}