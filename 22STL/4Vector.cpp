//---------------------------------- VECTOR STL------------------------------------
// 1) The most general purpose container is the vector.
// 2) it supports a dynamic array
// 3) Array size is fixed no flexibilty to grow or shrink during execution.
// vector can provide memory flexiblility.
// as it dynamic array no need to declare size.
//---------------------------- MOST IMP-----------------------------------------

// cin>>v; // we cannot use this to input the element in vector.

#include <iostream>
#include <vector> // Header file must be included
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    // --------------------------  INTIALIZER -----------------------------------------
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    // vector<int> v2(v1.begin(), v1.end());  // so all element of v1 from start to end are now in v2.
    // vector<int> v3(5, 10);                // here this means the vector sixe is 5 but it all value is fll with 10.
    // int arr[] = {1, 2, 3, 4, 5};
    // vector<int> v4(arr, arr + 5);        // this is also a way to intialize a vector all the array element are now in vector
    // vector<float> v5;                    // It will store float values
    // vector<char> v6(4);                  // here this means we have declare the vector of the size of 4 which will store characters in it.
    // vector<string> v7(3, "hello");       // here this means the vector sixe is 3 but it all value is fll with "hello".
    //------------------------------------------------------------------------------------------

    //----------------------------- PRINTING----------------------------

    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << " " << v1[i];
    // }
    // cout << endl;

    // --------------------------- PRINTING USE THIS MORE------------------------
    // for (auto el : v1)
    // {
    //     cout << " " << el;
    // }
    // cout << endl;

    //------------------------------------ EMPLACE BACK---------------------------------
    // emplaceback is FASTER when we have to insert USER DEFINED DATATYPES in comparison of push back.
    // v1.emplace_back(1);
    //------------------------------- INSERT ---------------------- -------------

    auto itr = v1.insert(v1.begin(), 100);
    // insert function gives a itertator to catch
    v1.insert(itr, 1000);
    v1.insert(itr + 3, 3000); // so at 3rd position it will get inserted
    vector<int> toInsert{1, 2, 3};
    v1.insert(v1.begin() + 1, {-1, -2, -3});                     // insert this whole array after v1.begin()+1
    v1.insert(v1.begin() + 1, 3, 0);                             // insert 0 for three times after v1.begin()+1
    v1.insert(v1.begin() + 1, toInsert.begin(), toInsert.end()); // insert 0 for three times after v1.begin()+1
    v1.emplace(v1.begin() + 1, 2000);                            // ---------------------------IT WORKS SAME AS EMPLACE---------------------------
    for (auto el : v1)
    {
        cout << " " << el;
    }
    cout << endl;

    //--------------------------------- DELETING----------------------------------
    v1.pop_back();
    v1.erase(v1.end() - 5);
    for (auto el : v1)
    {
        cout << " " << el;
    }
    cout << endl;
    // -------------------------------------- ACCESS ----------------------------
    // cout << v1[2] << endl;
    // cout << v1.at(7) << endl;
    // cout << v1.front() << endl;
    // cout << v1.back() << endl;
    // cout << *(v1.data() + 2) << endl; // v1.data returns a pointer so de derefence it.
    // if it is out of range so blank will be printed and also program may be crash.

    //----------------------- COMPARING VECTOR -------------------------
    // In vector we can also compare the vector with conditional operators.

    vector<bool> x;
    // as we have to comapre the vector x that its all value are true
    for (int i = 0; i < 5; i++)
    {
        x.push_back(true);
    }
    vector<bool> y(5, true);
    // so here we make a vector of size of x and fill true int and then we comapre it.
    cout << (x == vector<bool>(5, true) ? "true" : "false") << endl;
    // ------------ using == we can compare two vectors----------------
    cout << (x == y) << endl;

    // --------------------------- VECTOR CAPACITY----------------------------
    // as intilally it will be zero as element start going to add it will keep on increasing
    cout << v1.capacity() << endl;
    // -------------------------- VECTOR SIZE---------------------------

    // cout << v1.size();
    // --------------- TO CLEAR ALL THE ELEMENT IN THE  VECTOR--------------------------
    // v.clear();
    // --------------- TO Check our Vector is Empty or not --------------------------
    // v1.empty(); // return 1 and 0.
    // ------------------- TO ADD ELEMENT IN THE VECTOR--------------------
    vector<int>
        v;
    v.push_back(10); //the first elment inserted in the vector.
    v.push_back(20); // as the element added in vector its capacity keeop on doubling.
    v.push_back(70);
    v.push_back(100);
    v.push_back(50);
    // *************************************************************************

    // *****************************TO REMOVE AN ELEMENT IN THE VECTOR.************************************************************** //

    // v.pop_back(); // this will always remove the last element added in the vector first.

    // **************************** SORTING OF THE VECTOR***************************************************//
    // FOR THIS MUST INCLUDE THE ALGORITHM LIBRARY

    sort(v.begin(), v.end()); // to make the vector in ascending order.
                              // for (int i = 0; i < v.size(); i++)
                              // {
                              //     cout << v[i] << endl;
                              // }

    // ******************************* DESCENDING ORDER****************************************************//
    // for (int i = v.size() - 1; i >= 0; i--) // descending order.
    // {
    //     cout << v[i] << endl;
    // }

    // // *************************  RESEVRE ************************
    // cout << endl;
    // vector<int> v7;
    // v7.reserve(32); // It will reserve the size at least 32
    // for (int i = 0; i < 33; i++)
    // {
    //     v7.push_back(i);
    //     cout << v7.capacity() << "  " << v7.size() << endl;
    // }

    return 0;
}
