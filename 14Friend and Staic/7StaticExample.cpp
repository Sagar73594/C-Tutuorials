#include <iostream>
using namespace std;

class Employee
{
    int id; //[1] INstance memeber variable
    int mob;
    static int count; //[2] static member variable / class variable.

public:
    void setData(int i, int m)
    {
        id = i;
        mob = m;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee personal calling number " << mob << endl;
    }

    static void getCount(void) //[3] here as we put the static infront of void getcoutn so thst we can acess this fuvntion in main without oject.
    {
        //[4] cout<<id; // IMP:- throws an error here only static member can be defined non-static memebers are not defined here.
        cout << "The value of count is " << count << endl;
    }
};

// [5]Count is the static data member of class Employee its defination is must outside the class.
int Employee ::count=5; // [6]Default value is 0  //---------------------- MUST---------------------------------
//[7]return type class name :: name of the variable of static. no need to write static

int main()
{
    Employee harry, rohan, lovish;
    harry.setData(1, 123456);
    harry.getData();
    Employee::getCount(); //[10] we can aceess through class name as it is not depend on the object but not directly only through function thats why we make static function.//[11] but as the count is private so we have to make a function to access it thats why we make getcoutn.
    rohan.setData(2, 456789);
    rohan.getData();
    Employee::getCount();
    lovish.setData(3, 789456);
    lovish.getData();
    Employee::getCount();

    return 0;
}
