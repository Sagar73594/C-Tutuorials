//************************************* SHALLOW COPY AND DEEP COPY********************************************//
#include <iostream>
using namespace std;
class Dummy
{
    int a;
    int b;
    int *p;

public:
    Dummy()
    {
        p = new int;
    }
    void setdata(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }
    void printdata()
    {
        cout << a << "  " << b << " " << *p << endl;
    }
    Dummy(Dummy &d)
    {
        a = d.a;
        b = d.b;
        p = new int; // first here i have to create a int for the new variable as here the new variable is d2 so .
        *p = *(d.p); // derefercing the p and putting the value there.
    }
    ~Dummy()
    {
        delete p; // first d2 delete then d1.
    }
};
int main()
{
    Dummy d1;
    d1.setdata(3, 4, 15);
    Dummy d2 = d1;
    cout << "d1 :- ";
    d1.printdata();
    d2.printdata();
    d1.setdata(3, 14, 5);
    d1.printdata();
    d2.printdata();
    return 0;
}

// -------------

// class Dummy
// {
//     int age;
//     char *name;

// public:
//     Dummy(int age, char *name)
//     {
//         this->age = age;
//         // Shallow Copy
//         this->name = name;

//         // Deep copy;
//         // this->name = new char[strlen(name) + 1];
//         // strcpy(this->name, name);
//     }

//     void printdata()
//     {
//         cout << age << "  " << name << endl;
//     }
//     ~Dummy()
//     {
//         delete name; // first d2 delete then d1.
//     }
// };
// int main()
// {
//     char *name = "abcd";
//     Dummy d1(25, name);
//     d1.printdata();
//     name[3] = 'A';
//     cout << name << endl;
//     Dummy d2(28, "name");
//     d2.printdata();

//     return 0;
// }
