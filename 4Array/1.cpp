// --------------------------------------------------------------Array  ------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    // ----------------------------------------- Method of array declartion and definition--------------------------------------------------------------

    int marks[] = {23, 45, 56, 89}; // This method is used to assign the value of element at the time of declartion itself.

    marks[2] = 455; // You can change the value of an array
    cout << "These are marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    // -----------------------------------------  Method of array declartion and definition-----------------------------------------
    int mathMarks[4]; // This declartion aslo works first array of size 4 declare after then each elemt of array is assigned but this method is not useful.
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;
    // ----------------------------------------- Method of array declartion and definition-----------------------------------------
    int rollno[5]; // This methid is the most useful method u can assign as many value while using in lop fumction amd then print out the elemt by again using for loop.
    cout << "Enter the roll no of 5 students\n";
    for (int i = 0; i < 5; i++)
    {

        cin >> rollno[i]; // here dont use & to assign the value like in c. no format specifier is used.
    }
    for (int i = 0; i < 5; i++)
    {
        cout << rollno[i] << endl;
    }

    //**************************************************************** Pointers and arrays*******************************************************
    int marks[] = {23, 45, 56, 89};
    int *p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 1 + 1) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;

    return 0;
}
