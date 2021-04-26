//******************************************  MULTI SET IN STL ****************************************//
// TOPIC: std::multiset

// NOTES:
// 1. std::multiset is an Associative Container that contains a sorted set of ** duplicate ** objects of type Key. !IMPORTANT
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value. !IMPORTANT

// muliset time complexity O(logN)
#include <bits/stdc++.h>
#include <set>
#include <functional>
#include <string>
using namespace std;

class person
{
public:
    int age;
    string name;
    bool operator<(const person &rhs)
    {

        return age < rhs.age;
    }
    bool operator>(const person &rhs)
    {

        return age > rhs.age;
    }
};

int main()
{
    // multiset<int> multiset = {1, 2, 2, 8, 8, 5, 6, 7, 9}; // by default less;
    // // multiset<int, greater<>> multiset = {1, 2, 2, 8, 8, 5, 6, 7, 9};
    // multiset.insert(20);

    // for (const auto &e : multiset)
    // {
    //     cout << e << " ";
    // }

    // multiset<person, greater<>> p1 = {{20, "Durgesh"}, {23, "Vishal"}, {3, "Akash"}};
    // for (const auto &e : p1)
    // {
    //     cout << e.age << " " << e.name;
    // }
    multiset<int> m1;
    m1.insert(30);
    m1.insert(10);
    m1.insert(1000);
    m1.insert(20);
    m1.insert(305);
    // m1.erase(305);
    // m1.erase(20);
    cout << "first element " << *(m1.begin()) << endl;
    cout << "using next for derefencing " << *next(m1.begin()) << endl;
    cout << "using prev for derefencing " << *prev(m1.end()) << endl;
    cout << "using  for derefencing " << *(m1.end()) << endl; // Garabge.

    for (auto i : m1)
    {
        cout << i << endl;
    }

    return 0;
}