#include <bits/stdc++.h>
using namespace std;

int main()
{
    // We can make biset of any size 10^6 100 and many more.
    bitset<32> b2(5);
    cout << b2 << endl;
    // Now setting a bit On of off
    bitset<32> b1(8);
    b1[0] = 1;
    // b1.set(7);
    // b1.set(6);
    b1.set(5); // so fifth index get set to 1.
    cout << b1 << endl;
    cout << b1.count() << endl;
    cout << b1.flip() << endl;
    cout << (b1 & b2) << endl;
    cout << (b1 | b2) << endl;
    cout << (b1 ^ b2) << endl;
    cout << (b1 == b2) << endl;
    bitset<32> b3("1010"); // we can also pass a astring
    cout << b3 << endl;
    cout << !b3.none() << endl; // wehave to !b3.none()  to check is there any bit set if it then return 1.
    bitset<32> b4("10");        // we can also pass a astring
    cout << !b4.none() << endl;
    bitset<1000> b5("111");        // we can also pass a astring
    cout << b5 << endl;

    return 0;
}