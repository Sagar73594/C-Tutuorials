#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
// Time Complexity O(1)
// Internally array of Linked list.
// It will not on sorted basis.
int main()
{
    unordered_map<string, int> HashMap;

    // 1st Way to Insert
    HashMap.insert(make_pair("INDIA", 135));
    HashMap.insert(make_pair("CHINA", 141));
    HashMap.insert(make_pair("USA", 35));
    HashMap.insert(make_pair("UK", 6));
    // 2nd Way to Insert
    HashMap["CANADA"] = 3;

    for (auto i : HashMap) // to iterate over Map.
    {
        cout << i.first << " " << i.second << " ";
    }
    cout << endl;
    cout << HashMap.at("USA") << endl; // at function will check value at given kry.
    cout << HashMap["USSR"] << endl;   // !IMPORTANT Not use this way to find any leys value if the key is not present then it will create a new key and assign a value 0 to it.
    HashMap["USA"] = 30;               // For updation.

    if (HashMap.find("INDIA") == HashMap.end()) // to find elemnt if equal to end then not present.
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << HashMap.at("INDIA") << endl; // Use At opertaor only.
    }
    // check Presense

    if (HashMap.count("USSR") > 0) // if the key present then gives 1 else 0.
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    return 0;
}
