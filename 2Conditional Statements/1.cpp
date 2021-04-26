//****************************************** IF - ELSE IF - ELSE  and SWITCH CASE *************************************************************************************

#include <iostream>
using namespace std;
int main()
{
    //****************************************** IF - ELSE STATEMENT*************************************************************************************
    int age;
    cout << "enter you age please :" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "you cannot vote" << endl;
    }
    else if (age == 18) //[1] we can use as many else if statemnet
    {
        cout << "you just pass the criteria for vote" << endl;
    }
    else //[2] it is optional.
    {
        cout << "you can vote" << endl;
    }
    //****************************************** SWITCH CASE STATEMENT*************************************************************************************
    switch (age) //[3] here in switch we can use variable whose value is a integer or charcter not float value.
    {
    case 18:
        cout << "you are 18" << endl;
        break; //[4] break helps us to get outside the loop as our condition executed it will break tye pattern.

    case 22:
        cout << "you are 22" << endl;
        break;
    case 3:
        cout << "you are 3" << endl;
        break;
    case 4:
        cout << "you are 4" << endl;
        break;

    default: //[5] its is optional
        cout << "you are not special" << endl;
        break;
    }

    cout << "done bro"; //[6] here as this outside the switch case statemnet it will execute after the condition is true or false. this help us to show the use of break statement.

    return 0;
}