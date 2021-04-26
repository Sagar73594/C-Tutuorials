//******************************************************************** GENERIC FUCNTION CLASS********************************************************************************************//
#include <iostream>
using namespace std;
template <class X>
class Arraylist
{
private:
    struct Controlblock
    {
        int capacity;
        X *arr_ptr;
    };
    Controlblock *s; // here i have pnly created a pointer

public:
    Arraylist(int capacity)
    {
        s = new Controlblock; // here i have assigned the address of the controlblock dataype in a pointer.
        s->capacity = capacity;
        s->arr_ptr = new X[s->capacity];
    }
    void Addelement(int, X);
    void viewdata(int, X &);
    void viewlist();
};
template <class X>

void Arraylist<X>::Addelement(int index, X data)
{

    if (index >= 0 && index <= s->capacity - 1)
    {
        s->arr_ptr[index] = data;
    }
    else
    {
        cout << "Array index is not valid";
    }
}
template <class X>

void Arraylist<X>::viewdata(int index, X &data)
{

    if (index >= 0 && index <= s->capacity - 1)
    {
        data = s->arr_ptr[index];
    }
    else
    {
        cout << "Array index is not valid";
    }
}
template <class X>

void Arraylist<X>::viewlist()
{
    for (int i = 0; i < s->capacity; i++)
    {
        cout << "  " << s->arr_ptr[i];
    }
    cout << endl;
}

int main()
{
    int data;
    Arraylist<int> l1(4);
    l1.Addelement(0, 0.8);
    l1.Addelement(1, 1.1);
    l1.Addelement(2, 1.2);
    l1.Addelement(3, 12.3);
    l1.viewlist();
   

    return 0;
}
