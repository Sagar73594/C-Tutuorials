// //********************************************** STL  SET *************************************************//
// // TOPIC: std::set
// // NOTES:
// // 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// // 2. It is usually implemented using Red-Black Tree.
// // 3. Insertion, Removal, Search have logarithmic complexity.
// // 4. If we want to store user defined data type in set then we will have to provide
// //    compare function so that set can store them in sorted order.
// // 5. We can pass the order of sorting while constructing set object.

// // BOTTOM LINE:
// // It store unique elements and they are stored in sorted order (A/D)

#include <iostream>
#include <set>
#include <functional>
#include <algorithm>
#include <string>
using namespace std;
class Person
{
public:
    int age;
    string name;

    bool operator<(const Person &rhs)
    {

        return age < rhs.age;
    }
};

int main()
{
    // //****************************  USER DEFINED DATATYPE ****************************
    // set<Person> set3 = {{50, "Avan"}, {46, "Geeta"}, {26, "Priya"}};
    // cout << "Set 3" << endl;
    // for ( const auto& num : set3)
    // {

    //     cout << num.age << " " << num.name << endl;
    // }

    //---------------------------------------------------------
    set<int> set1 = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    cout << "Set 1" << endl;

    for (auto num : set1)
    {
        // It will always print the unique element
        //  from the set object never print any repeat object.
        // It will alawys print it in sorted form by defalut ascending order.
        cout << num << " ";
    }
    cout << endl;
    //**-------------------- To store item in Descending
    set<int, greater<>> set2 = {12, 16, 857, 124, 6, 78, 36, 74, 88, 129, 88};
    cout << "Set 2" << endl;
    for (auto num : set2)
    {

        cout << num << " ";
        // It will print it in sorted form by  Descending order. as we have used the greater<>
        // this function and this function is in the functional lib.
    }
    cout << endl;

    // ------------------------- TO FIND -------------------------------
    // set<int>::iterator sitr;
    // int num;
    // cout << "Enter a number u r searching " << endl;
    // cin >> num;
    // sitr = find(set1.begin(), set1.end(), num);

    // if (sitr != set1.end())

    // {
    //     cout << "found in s1 " << num << endl;
    // }
    // else
    // {
    //     cout << "Not found" << endl;
    // }
    //------------- checks if sets 1 and set2 contain same data---------------
    // bool b = includes(set1.begin(), set1.end(), set2.begin(), set2.end());
    // if (b)
    // {
    //     cout << "s1 and s2 are identical " << endl;
    // }
    // else
    // {
    //     cout << "s1 and s2 are not identical " << endl;
    // }
    //------------------------- To remove any data.

    set<int>::iterator it;
    it = set2.find(857);
    set2.erase(it);
    cout << "After deleting " << endl;
    for (auto i : set2)
    {
        cout << i << " ";
    }

    return 0;
}
