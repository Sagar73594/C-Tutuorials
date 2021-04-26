#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> v1;

    // for (int i = 0; i < 5; i++)
    // {
    //     v1.push_back(5 * i);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << v1[i] << " ";
    // }

    // vector<int>::iterator itr1; // iterator declartion

    // for (itr1 = v1.begin(); itr1 != v1.end(); itr1++)
    // {
    //     cout << *itr1 << " ";
    // }

    // // ********************************** 02***********************************//

    // vector<int> v2{10, 20, 30, 40, 50};
    // for (auto itr2 = v2.begin(); itr2 != v2.end(); itr2++) // this auto will initliaze itself.
    // {
    //     cout << *itr2 << " ";
    // }

    // ****************************************03**********************************//
    vector<int> v3{10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};

    for (auto num : v3) // this auto will initliaze itself.
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Size " << v3.size() << endl;         // size Function
    cout << "Capacity " << v3.capacity() << endl; // capacity function
    cout << "front " << v3.front() << endl;       // to get the front element
    cout << "at " << v3.at(2) << endl;            // to get elelment at index(i)

    vector<int>::iterator itr3 = v3.begin(); // Iterator declartion and define it will the first value.
    itr3 = itr3 + 3;
    cout << "itr3   " << *itr3 << endl;

    cout << "back" << v3.back() << endl; // It show the last element of the vecto list.
    // v3.insert(itr3, 11);
    v3.erase(itr3);
    for (auto num : v3) 
    {
        cout << num << " ";
    }
    return 0;
}