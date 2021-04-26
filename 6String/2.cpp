// ------------------------------------------------   STRING ------------------------------------------------
// STRING IS ALSO ANOTHER CONATINER CALSS IT COME IN THE CALSS OF ITERARTOR.
#include <iostream>
#include <string> // IT IS DIFFERENT THEN CSTRING STRING IS FOR STL FOR STRING.

// using namespace std;

// int main()
// {
//     string s1;      // here string is class and s1 is object;
//     s1 = "Durgesh"; // this way aslo we can assign but in c we cant assign like this
//     cout << s1 << endl;
//     string s2("Rai"); // this way aslo we can assign it as string is class so here string is wroks as constructor
//     cout << s2 << endl;
//     string s3 = "Avan "; // this is the traditional method
//     cout << s3 << endl;
//     string s4;
//     s4 = s3 + s2; // simply concentatination without using strcat.
//     cout << s4 << endl;

//     if (s1 == s2) // direct comparision without using strcmp.

//     {
//         cout << "same same";
//     }
//     else
//     {
//         cout << "no no";
//     }

//     string s5;
//      cout<<"please input here\n";
//     cin>>s5; // here always single word will come.
//     cout<<s5;
//     here miexed opertion can also be done.
//    string s6 = "Hello";
//      char str[] = "world";
//     string s7 = s6 + str;
//      string s7 = s6 + "123";
//    string s7 = s6 + 'W';
//     cout << s7;

//     return 0;
// }

// *******************************************************************************************STRING FUNCTION****************************************************************************************
// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main()
// {

//     string s1;
//     s1.assign("hello");
//     //***********************************************************************************************************************
//     s1 = "Hello" // another methid
//          cout
//          << s1 << endl;
//     string s2 = "Hello";
//     s2.append("World");
//     //*******************************************************************************************************************
//     s2 += "World"; // another method
//     cout << s2 << endl;

//     string s3 = "Hello";
//     s3.insert(2, "Man"); // 2 is index and Man is string which is added at the 2 position
//     //***********************************************************************************************************************
//     cout << s3 << endl;

//     string s4 = "Hello";
//     s4.replace(2, 3, "MAN"); // 2 is index and 3 is length so llo is replace by MAN here.
// ***********************************************************************************************************************
//     cout << s4 << endl;

//     string s5 = "Hello";
//     s5.erase(); // everythibg will be erase in string s5.
//     //***********************************************************************************************************************
//     cout << s5 << endl;

//     string s6 = "Hello Durgesh Durgesh rai";
//     int i = s6.find("Durgesh"); // it will find the position of string if not avaiable then -1 will be answer.
//     //***********************************************************************************************************************
//     cout << i << endl;
//     int x = s6.rfind("Durgesh"); // it will find the position of string in reverse order if not avaiable then -1 will be answer.
//     //********************************************************************************************************************
//     cout << x << endl;

//     string s7 = "durgesh";
//     string s8 = "durgesh";
//     int i = s7.compare(s8);
//     //***********************************************************************************************************************
//     cout << i;
//     int j = s7.size();
//     cout << j;
//     //***************************************** CONVERTING AN INTEGER TO  A STRING (sstream library need)    *********************************************************************
//     int n = 12345;
//     ostringstream str1; // this help us to make a charcater sequence word to a string
//     str1 << n;
//     string s = str1.str(); // .str() is function which make the character sequence in array.
//     // cout << s[1];  // throgh this way we can access the element but the elelmet will be charcater mode weather it is integere u have to typecaste it to use it in intger form.
//     int j = s.size();
//     int sum = 0;
//     for (int i = 0; i < j; i++)
//     {
//         int p = (int)s[i]; // type casting here.
//         p = p - 48;        // subrtcating as ascii code of 0 is 48.
//         sum = sum + p;
//     }
//     cout << sum;

//     return 0;
// }

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string name = "durgesh";
    // for (int i = 0; i < name.size(); i++)
    // {
    //     cout << name[i] << endl;
    // }
    // char word = name[0];
    // cout << name << endl;
    // cout << name.size() << endl;
    // cout << name.length() << endl;
    // cout << "Appende at last " << name.append("f") << endl;     //  this wll appends in the last.
    // cout << "Appende at last " << name.append(1, word) << endl; // here the first argument 1 is how many time u want to append the first cahrcter in the string word.
    // // cout << name << endl;
    // cout << "erase at  " << name.erase(0, 4) << endl; // this erase the first 4 letter from 0 to 4;

    // string name2 = "rai";

    // string name3 = name + " " + "ay" + name2;
    // cout << name3;

    // string name = "urgeshday";
    // name.erase(name.size() - 2, name.size());
    // char last = name[name.size() - 1];
    // cout << name << endl;
    // cout << last << endl;
    // name = last + name;
    // name.erase(name.size() - 1, name.size());
    // cout << name << endl;

    char s1[] = "cat";
    char s2[] = "catd";
    int n = strspn(s2, s1);
    cout << n;

    return 0;
}
