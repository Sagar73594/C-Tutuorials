#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// [1]This will not swap a and b here the a and b are local to this variable so as soon as the function job done the local variable destroy that why it will not reflect back on the main program
void swap(int a, int b)
{                 //[2]temp a b
    int temp = a; //[3]4   4  5
    a = b;        //[4]4   5  5
    b = temp;     //[5]4   5  4
}

//[6] Call by reference using pointers here we are dealing will the address so the function will swap as the we adddress so the fumction will change the value and it reflect on the main function.
void swapPointer(int *a, int *b)
{                  //[7]temp a b
    int temp = *a; //[8]4   4  5
    *a = *b;       //[9]4   5  5
    *b = temp;     //[10]4   5  4
}

//[11] Call by reference using C++ reference Variables  this is new c++ menthod we have to call like a value function but use refrence operator to access the address of the variable.
// int &  // [12]  as to return something from refernce varibale we have to use the & here as we have call from refrence using c++ methid
void swapReferenceVar(int &a, int &b)
{                 //[13]temp a b
    int temp = a; //[14]4   4  5
    a = b;        //[15]4   5  5
    b = temp;     //[16]4   5  4
    // return a;
}

int main()
{
    int x = 4, y = 5;
    // [17]cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y); //[18] This will not swap a and b
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y); //[19]This will swap a and b using pointer reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y); //[20]This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}