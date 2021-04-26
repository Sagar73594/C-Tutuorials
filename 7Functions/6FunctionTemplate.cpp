//********************************************[1] TEMPLATES IN C++**************************************************************************************************//
#include <iostream>
using namespace std;

int big(int a, int b) //[2] this is old method where if we have to pass another datatype of arguments we have to do function overlaoding.
{

    if (a > b)

    {
        return a;
    }
    else
    {
        return b;
    }
}

double big(double a, double b)
{

    if (a > b)

    {
        return a;
    }
    else
    {
        return b;
    }
}
//******************************************************************************[3] FUNCTION TEMPLATE DECLARTION *********************************************************************************//

template <class X> //[4] the declartion is simple just write first template the angular brcaket then write class after then give the name X Y any kind. then just define as usual .
X big(X a, X b)    //[5] Here first X is return type then two X is for data type.
{
    if (a > b)

    {
        return a;
    }
    else
    {
        return b;
    }
}
//***********************************************************************[6] DIFFRENT FUNCTION ARGUMENTS  *************************************************************************************//
template <class X, class Y> //[7] You can use as many class for diffrent data type it will find is form by the calling function.
Y sum(X a, Y b)             //[8] here as Y is double son we will get the double inn return if it was X and X is int in calling function first argument so X will return int.
{

    return a + b;
}
int main()
{

    cout << "int datatype " << big(4, 5) << endl; //[9] here we have to do function overloading to do same work for diffrent type.
    cout << "int datatype " << big(4.5, 3.5) << endl;
    //***************************************************************[10]  FUNCTION TEMPLATE DEFINATION **************************************************************//
    cout << "Template " << big(4, 5) << endl; //[11] This is FUNCTION template as here we dont need to do fucntion overloading we can pass as many argument here of diffrent data type here .
    cout << "Template " << big(4.5, 3.5) << endl;
    cout << "New Tempate" << sum(4, 4.5);
    return 0;
}