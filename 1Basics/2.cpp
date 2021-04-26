// #---------------------------------------------------- COMMENTS --------------------------------------------------------------------------------------
#include <iostream>
using namespace std; //[1] we can use this method rather then writing std:: cout<< this rather good aproach declaring global.
//  Single line comment
/* this 
is a 
mutliline cpmment
*/
int main()
{
    int sum = 6;
    int a = 7;
    int b = 8;
    int sum1 = a + b;
    cout << "A + B = " << sum1 << endl;
    cout << sum << endl; // this opertor << is  to get print output in the screen so use (<<  (put to))where in c program we use , for printing no need of format specifer.
    cout << "\nDurgesh";

    // For new line use <<endl  or  '\n'
    return 0;
}
