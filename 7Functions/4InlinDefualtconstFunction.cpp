#include <iostream>
using namespace std;

//******************* INLINE FUNCTION*********************//
inline int product(int a, int b) // [1] here we have use inline functions the inline function helps to return a * b; put his return value direct to the calling function. but dont use too much inline function for recurssion method and the function which more than one line to execute than dont use inline function.
{
    //[2] static function retain the value of variable after the execution of code.
    return a * b;
}

//*************** DEFUALT ARGS****************************//
float moneyReceived(int currentMoney, float factor = 1.04) //[6] this the example of default arguments always the value which u have assigend in the function kept it on right side and aslo u change the value of deafult argument by the calling function itself only.
{
    return currentMoney * factor;
}

//******************** CONST ***********************//
void str(const char *p) //[7] this is use of const keyword it will make sure that the value doesnt change in the whole program.
{
}
int main()
{
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << " Rs after 1 year";
    return 0;
}

//[3] Not recommended to use below lines with inline functions
// static int c=0; //[4] This executes only once
// c = c + 1; //[5] Next time this function is run, the value of c will be retained