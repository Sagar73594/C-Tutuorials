
// Problem Link -
/* By Durgesh Rai */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // this header file for Policy Based
#include <ext/pb_ds/tree_policy.hpp>     // tree policy
#include <ext/pb_ds/trie_policy.hpp>     // trie policy
using namespace __gnu_pbds;              // policy based namespace
using namespace std;                     // standard Namespace
#define ll long long int
//             Key type ll, map as set there for null , Comaprator function,type of data strcuture as normal is used Red black tree, to update node.
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main(int argc, char const *argv[])
{
    pbds arr;
    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.insert(4);

    for (auto i : arr)
    {
        cout << i << endl;
    }

    // To Important Function
    // 1. Find by Order it return 0,1 largest number
    // 2. Order of key it return a number n strictly smaller than n.

        cout << *arr.find_by_order(1) << endl;
        cout << *arr.find_by_order(3) << endl;
        cout << *arr.find_by_order(0) << endl;
        cout << *arr.find_by_order(2) << endl;

        cout << arr.order_of_key(2) << endl;  // giver all the number less tahn 2 as here is 1 only smaller than 2 so return 1.

    return 0;
}

