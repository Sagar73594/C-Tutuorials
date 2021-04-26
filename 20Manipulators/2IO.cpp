//******************************   I/O ***********************************//
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a charcter" << endl;
    cin.get(ch); // get is function of the cin object so we have to use dot opetraor to access this function it will extract one charcter.
    cout << ch << endl;
    cin.putback(ch); // putback is also function of the object cin of istream class it will insrert last charcter read,back into input stream
    cin.get(ch);
    cout << ch << endl;
    int count = cin.gcount(); // return number of charcters read by a call to get(),getline() or read().
    cout << endl
         << "charcters extracted in last get() = " << count;
    cin.putback('Z');
    ch = cin.peek(); // reads one charcter leaves in it stream.
    cout << endl
         << ch;
    cin.get(ch);
    cout << endl
         << ch;

    return 0;
}
