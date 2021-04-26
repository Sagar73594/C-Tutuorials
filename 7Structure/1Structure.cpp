#include <iostream>
using namespace std;

typedef struct employee //[1] strucuture is used a user defined data tyoes we can store different types of data types in it.
{
    //[2] here the total size of struct will be 4 of int 1 of char and 4 of float = 9.
    int eId;
    char favChar;
    long double salary;
} ep; //[3] here  as we have used typedef function so the name of this the function is now ep from struct employee.

typedef union money //[4] union is best for memory mangement we can our mange very easily w cannot use all the three data types at one time at one time we can use only one data type.
{
    //[5] here the size of union will be max of the data type which are declare in it as here int and float size is [max 4] and so the union size will 4.
    int price;
    char car;
    float pounds;
} my;
int main()
{
    //*****************************************************[1] STRUCT*********************************************************
    ep harry;      //[6] here the type def function is used.
    harry.eId = 1; //[8] here also dot opertaor is used to assign te value
    harry.favChar = 'c';
    harry.salary = 120000;
    struct employee shubham = {2, 'd', 5000}; //[7] this is also another way we can assign the value in the structure.
    cout << "The value is " << shubham.eId << endl;
    cout << "The value is " << shubham.favChar << endl;
    cout << "The value is " << shubham.salary << endl;
    struct employee rohanDas;
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;
    //*****************************************************[2] UNION*********************************************************
    // union money m1; //[9] same dot opertor is used
    my m1; //[9] same dot opertor is used
    m1.price = 34;
    m1.car = 'c';
    cout << m1.price << endl;
    //*****************************************************[3] ENUM*********************************************************

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };               //[10] here enum is data type in which the elements wich are in brackets have a value from 0 to the n number of element it has.
    Meal m2 = lunch; //[11] here meal can be used as a data type so we can assign the value of any variable.
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    cout << (m2);
    return 0;
}
