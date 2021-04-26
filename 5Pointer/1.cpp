//---------------------------------------------------- POINTER CONCEPTS ----------------------------------------------------------------/
#include <iostream>
using namespace std;

int main()
{
    // //---------------------------------What is a pointer? ----> Data type which holds the address of other data types-------------------------------------------
    // int a = 3; //[2] here the variable whcih integer type store value 3 in it.
    // int *b;    //[3] here *b means b is pointer which type of integer means pointning a interger typer type value or return a int type value.
    // b = &a;    //[4] here address of a is store in b using address operator &.

    // //-----------------------------------------( &) ---> (ADDRESS OF) OPERATOR -----------------------------------------------------------------
    // cout << "The address of a is " << &a << endl; //[5] here we will get the address opertor of by using ampeersand .
    // cout << "The address of a is " << b << endl;  //[6] this another method to get the addess of as address of a is store in b.

    // //------------------------------------- (*) ---> (VALUE AT) DEREFRNCE OPERATOR-----------------------------------------------------------------
    // cout << "The value at address b is " << *b << endl; //[7] here * b means de refence it and pront the value which is stire in in that address.

    // //-------------------------------------------- POINTER TO POINTER -----------------------------------------------------------------
    // // [8]pointer to pointer concept is easy means a pointer which is pointing a pointer.
    // int **c = &b; //[9] here c is pointer to pointer which pointing towards b as b is also pointer and thats why we used ** two astermark and we can many pointer to pointer type varibale.
    // cout << "The address of b is " << &b << endl;
    // cout << "The address of b is " << c << endl;
    // cout << "The value at address c is " << *c << endl;                      //[10] *a will give the address of a.
    // cout << "The value at address value_at(value_at(c)) is " << **c << endl; // [12]**c will give the value of a which is 3.

    // // ---------------------------------------EXAMPLE OF POINTER TO A POINTER TO A POINTER-----------------------------------------------------------------/
    // int ***d = &c;
    // cout << "The value at address value_at(value_at(d)) is " << ***d << endl;
    //----------------------------------  ARRAY AND POINTER ---------------------------------------
    int arr[5];
    int *ptr = arr; // storing the base address in it.
    // int *ptr = &arr[0];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> ptr[i];
    }

    ptr[2] = 10; //  we can also chnage the value.
    for (int i = 0; i < 5; i++)
    {
        sum = sum + ptr[i];
        cout << ptr[i] << " ";
    }
    cout << sum;

    delete[] ptr;  // this way we deallocate the memeory in the heap.
    ptr = nullptr; // after that making that pointer as nullptr.

   
    return 0;
}
