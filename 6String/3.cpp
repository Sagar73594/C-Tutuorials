#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    // string s;
    // // cin >> s;
    // //***************************** STRING GETLINE FUNCTION**********************//
    // getline(cin, s);
    //**************************** EXTRACTING A STRING***************************//
    // stringstream str(s);
    // string word;
    // while (str >> word)
    // {
    //     cout << word << endl;
    // }

    // cout << s<<endl;
    // cout << s[0]<<endl;
    // cout << s[1]<<endl;
    // cout << s[2]<<endl;
    // cout << s[3]<<endl;
    // cout << s[4]<<endl;
    // cout << s[5]<<endl;
    // cout << s[6]<<endl;
    // cout << s[7]<<endl;
    // cout << s[8]<<endl;
    //********************************* THIS WILL EXTRACT THE STRING BY CHARCATER BY CHARCATER****************//
    // int n = 12345;
    // ostringstream str1;
    // str1 << n;
    // string s = str1.str();
    // cout << s[0] << endl;
    // cout << s[1] << endl;
    // cout << s[2] << endl;
    // cout << s[3] << endl;
    // cout << s[4] << endl;

    //************************************* MEMSET FUCNTION *******************//

    //*** USE THE CSTRING LIBRARAY FOR THIS ********//

    // int arr[10] = {0}; // we can only intiliaze only zero other tha no value we can intiliaze like this.
    // cout << arr[5];
    //  int arr[10] = {10}; // Example we will still get zero .
    // cout << arr[5];
    //************************** DYNAMICALLY ARRAY BUT STILL THE SAME PROBLEM LIKE ABOVE*****************//
    // int n;
    // cout << "Input the size of the array u want" << endl;
    // cin >> n;
    // int arr[n] = {10};
    // cout << arr[5];
    //******************************* MEMSET FUNCTION****************//
    int n;
    cout << "Input the size of the array u want" << endl;
    cin >> n;
    int arr[5];
    memset(arr, -1, sizeof(arr)); // only -1 and 0 can be assign dynamically using this function.
     cout << arr[5];
    return 0;
}