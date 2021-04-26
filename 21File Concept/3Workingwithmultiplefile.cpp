// ***************************** WORKING WITH MULTIPLE FILE *********************//
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //********************* WRITING WITH OFSTREAM ***************************
    ofstream ob1("mycountry.txt", ios::out);
    ob1 << "India" << endl;
    ob1 << "USA" << endl;
    ob1 << "UK" << endl;
    ob1 << "IRELAND" << endl;
    ob1.close();

    fstream ob2("mycapital.txt", ios::out);
    //********************* WRITING WITH FSTREAM ***************************

    ob2 << "DELHI" << endl;
    ob2 << "WASHINGTON" << endl;
    ob2 << "LONDON" << endl;
    ob2 << "DUBLIN" << endl;
    ob2.close();

    ifstream ob3("mycountry.txt", ios::in);
    //********************* READING WITH oFSTREAM ***************************
    cout << "COUNTRY NAME :- " << endl;

    char ch;
    while (!ob3.eof())
    {

        ob3.get(ch);
        cout << ch;
    }
    ob3.close();

    fstream ob4("mycapital.txt", ios::in);
    //********************* READING WITH FSTREAM ***************************
    cout << "CAPITAL NAME :- " << endl;

    char ch1;
    while (!ob4.eof())
    {

        ob4.get(ch1);
        cout << ch1;
    }
    ob4.close();

    return 0;
}