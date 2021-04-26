//************************************************************ WRITING METHOD ********************************************************************//
#include <fstream>
#include <iostream>
using namespace std;

// fstream can do both.
// ofstream -> for writing file specially.
// ifstream -> for reading the file content .
int main()
{

    ofstream ob1("1.txt");
    ob1 << "This is Tutorial is for writing the file by object method." << endl;
    ob1.close();
    return 0;
}
