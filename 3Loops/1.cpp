// #--------------------------------------------------------------- TYPES OF LOOP-------------------------------------------------------------------
// There are three types of loops in C++:
//     1. For loop
//     2. While Loop
//     3. do-While Loop
//     4. for-each loop

#include <iostream>

using namespace std;
int main()
{

    // #--------------------------- Wihtout using any loop in C++ Example-------------------------------------------------

    // int i=1;
    // cout<<i;
    // i++;

    //-------------------------------------------------- FOR LOOP ------------------------------------------------/
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //
    //     cout<<i<<endl;
    // }
    //    #------------------------------------- USING BREAK AND CONTINUE IN FOR LOOP--------------------------------------
    // for (int i = 0; i <= 10; i++)
    // {

    //     if (i == 2)
    //     {
    //         break; // the break will break the loop as soon as the above condition get satisified.
    //     }
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (int i = 1; i <= 10; i++)
    // {

    //     if (i == 2)
    //     {
    //         continue; // this will help to skip that above iteration as soon it will find it.
    //     }
    //     cout << i << " ";
    // }

    //----------------------------------------------------------- EXAMPLE OF INFINITE FOR LOOP------------------------------------------/
    // for (int i = 1; 34 <= 40; i++) //[5] here the codition is always true so the loop will be infinite.
    // {
    //
    //     cout<<i<<endl;
    // }

    //-----------------------------------------------------------WHILE LOOP -----------------------------------------------------------
    // Syntax:
    // while(condition)  //[7] use this loop when u dont know the exact number if time u want to execute.
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    //----------------------------------------------------------- EXAMPLE OF INFINTE WHILE LOOP -----------------------------------------------------------
    // int i = 1;
    // while (true) //[9] here the while loop will be infinite as the condition is never failing.
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //----------------------------------------------------------  DO WHILE LOOP -----------------------------------------------------------
    // Syntax:
    // do //[11] here in the do while the loop will be executed for atleast one time mot more than once but once it will pront whatever is written in do.
    // {
    //     C++ statements;
    // }while(condition);

    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    //---------------------------------------------- MULTIPLICATIION TABLE EXAMPLE USING DO - WHILE LOOP--------------------------------------/

    int n;
    int a = 1;
    cout << " The multiplication tabkle of 6 is " << endl;

    do
    {
        n = 6 * a;
        a++;
        cout << n << endl;
    } while (n != 60); // as the value of n get increase above the 60 the condition will false and then loop will be not executed.

    return 0;
}
