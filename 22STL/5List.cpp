// // ********************************* LIST CLASS IN STL*************************//
// // List class supports a bidirectional , linear list.
// // Vector supports random access but a list can be acccessed sequentially only.
// //  List can be accessed front to back or back to front.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    // ADDING ELEMENTS
    ls.push_back(10);  // it will added at last;
    ls.push_front(20); // it will added at front;
    ls.push_back(30);
    ls.push_front(40);
    ls.push_back(50);
    ls.push_front(60);
    ls.push_back(70);
    ls.push_front(80);

    // DISPALY ELEMENTS
    for (auto itr : ls)
    {
        cout << itr << endl;
    }
    cout << "Element at front " << ls.front() << endl;
    cout << "Element at Back " << ls.back() << endl;

    ls.pop_front(); // it remove from the front
    ls.pop_back();  // it remove from the back
    ls.pop_front();
    ls.pop_back();

    // DISPALY ELEMENTS
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    // INSERT ELEMENTS

    list<int>::iterator itr;
    itr = ls.begin();
    // advanced the iterrator for next posotion
    advance(itr, 3); // like this we can advanced itertaort not by itr+3.
    advance(itr, 2);

    // DISPALY ELEMENTS
    cout << "After inserting" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    itr = ls.begin();
    itr++;
    ls.erase(itr);

    // ERASING ELEMENTS
    cout << "After Erasing" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    ls.reverse();

    cout << "After Reversing" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    ls.sort();

    cout << "After Sorting" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    ls.sort(greater<int>());
    cout << "After Sorting" << endl;
    for (auto itr : ls)
    {
        cout << itr << endl;
    }

    return 0;
}