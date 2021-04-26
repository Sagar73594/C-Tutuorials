
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // this header file for Policy Based
#include <ext/pb_ds/tree_policy.hpp>     // tree policy
#include <ext/pb_ds/trie_policy.hpp>     // trie policy
using namespace __gnu_pbds;              // policy based namespace
using namespace std;                     // standard Namespace
#define ll long long int
typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;

int main(int argc, char const *argv[])
{
    pbtrie arr;
    arr.insert("Earth");
    arr.insert("Eagle");
    arr.insert("Eat");
    arr.insert("EarPhone");
    arr.insert("Elephant");
    arr.insert("Durgesh");
    arr.insert("Einstein");

    // It will print all the prefix which we give it to .
    auto prefix_strings = arr.prefix_range("Ea");
    for (auto it = prefix_strings.first; it != prefix_strings.second; it++)
    {
        cout << " " << *it << endl;
    }

    return 0;
}
