//********************************************* STL IN ARRAY *****************************************************//
#include <iostream>
#include <array>
using namespace std;
// as the stl is also template its full formis Standard template library.
// so we define the object of the template class eg:-     class name < datatype > objectname.
// In stl for array we have define as class name is fix array so :-  array<datatype,size of array> objectname

int main()
{
    //********* DECLARTION *********************//
    // array<int, 5> arr1;
    //************************************** .at() and [] ******************************************************//
    //********************************** Two ways to fill array element ****************************************//
    //********************************** 1st method ************************************************************//
    // array<int, 5> arr1;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr1[i]; //[] this can also use to point the element fo the array
    // }
    // cout << "Array elements are " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << arr1.at(i); // .at()  this can also use to point the element fo the array
    // }
    //***********************************     2nd method *******************************//
    // array<int, 5> arr1 = {1, 2, 3, 4, 5};
    // cout << "Array elements are " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << arr1.at(i);
    // }
    //********************************** front() & back ()*************************************************//
    //******* array<int, 8> arr1 = {1, 2, 3, 4, 5}; // for this back will give output 0.***********//

    // array<int, 5> arr1 = {1, 2, 3, 4, 5};
    // cout << "Array elements are " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << arr1.at(i); // .at()  this can also use to point the element fo the array
    // }
    // cout << endl;
    // cout << arr1.front(); // it give the first element
    // cout << endl;
    // cout << arr1.back(); // it give the last element
    //********************************************  fill() *********************************

    // array<int, 5> arr1;
    // arr1.fill(10); // this funcyion will fill teh array with the same element.

    // cout << "Array elements are " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << arr1.at(i); // .at()  this can also use to point the element fo the array
    // }

    //*************************  SWAP() *******************************//

    // array<int, 5> array1 = {11, 12, 13, 14, 15};
    // array<int, 5> array2 = {1, 2, 3, 4, 5};
    // cout << "Befor Swapping" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << array1[i];
    // }
    // cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << array2[i];
    // }
    // cout << endl;
    // array1.swap(array2);
    // cout << "After Swapping" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << array1[i];
    // }
    // cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " " << array2[i];
    // }
    //****************************************** size()******************//
    array<int, 15> array1 = {11, 12, 13, 14, 15};
    cout << array1.size();

    return 0;
}