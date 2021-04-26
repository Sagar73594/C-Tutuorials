//----------------------------------------------- CHAR[] -----------------------------------------------------------
#include <iostream>
#include <string.h> // C Lib
using namespace std;

int main()
{
    char s1[10] = "DURGESH";
    char s2[20];
    cout << "EARLIER S1 :- " << s1 << endl;
    //***************** IF u ant to change the data in the s1 .***************
    // s1[10]= "durgesh" ;// wrong u cant  do like this
    // ------------------------------------------------- strcpy ------------------------------------------------
    strcpy(s1, "RAI");
    cout << "After using strcpy s1 is :- " << s1 << endl;
    // ------------------------------------------------to copy one data in anaother aaray-- ----------------------------------------------
    //----------- s2 = s1;// wrong.
    strcpy(s2, s1);
    cout << "After using strcpy s2 is :- " << s2 << endl;
    // ------------------------------------------------to comapre two char array ------------------------------------------------
    //------------ s2 < s1  wromg.
    //------------------------------------------------strcmp ------------------------------------------------
    int res = strcmp(s1, s2);
    cout << res << endl;
    // IF SAME THEN 0 otherwise -1 or 1 wll be the naswer accordimng ton ascii code.
    // ------------------------------------------------strcat-- ----------------------------------------------

    strcpy(s1, strcat(s1, s2));
    cout << "After using strcat s1 is :- " << s1 << endl;

    return 0;
}
