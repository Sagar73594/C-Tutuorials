//********************************* 02*************************************//
#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main()
{
    double num;
    double deno;
    double res = 0;
    cout << "Enter numerator and denominator" << endl;
    cin >> num >> deno;
    try // this we have put there where we expect that error can ne there or any exception will be there so we used to handle that exception.
    {
        if (deno == 0)
        {
            throw deno; // u have to throw that exception
        }
        res = num / deno;

        string str1 = "YANKEE";
        string str2 = "DOODLE";
        str1.append(str2, 7, 3);
        cout << str1 << endl;
    }
    catch (logic_error &le)
    {

        cout << le.what();
    }
    catch (double ex) // later catch that error in any variable.
    {
        cout << "Denominator cannot be zero" << endl;
        return 0; // as it will return and the code below it never be executed.
    }
    cout << endl;
    cout << res << endl;

    return 0;
}