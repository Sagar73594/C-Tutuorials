// #---------------------------------------------------- I/O Manipulators --------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip> // [1]this is another hader file which is knows and input output manipulators.

using namespace std;

int main()
{
  int a = 34;
  cout << "The value of a was: " << a;
  a = 45; //[2] as here we can change the value of a form 34 to 45.
  cout << "The value of a is: " << a;
  //    // ----------------------------------------------------------- Constants in C----------------------------------------------------
  const int b = 3;
  cout << "The value of a was: " << b << endl;
  // b = 45; // [3]You will get an error because a is a constant so we cannot chane he value of a form 3 to 45.
  cout << "The value of a is: " << b << endl;

  // ---------------------------------------------------------------Manipulators in C++-------------------------------------------------------------
  a = 3;
  int e = 78;
  int c = 1233;
  cout << "The value of a without setw is: " << a << endl; // [4]here as it is without setw so the value be not sotre in formated method.
  cout << "The value of b without setw is: " << e << endl;
  cout << "The value of c without setw is: " << c << endl;

  cout << "the value of a is: " << setw(4) << a << endl; // [5]here as it is with setw so the value be sotre in formated method with total width of 4 thats why we use setw.
  cout << "the value of a is: " << setw(4) << e << endl;
  cout << "the value of a is: " << setw(4) << c << endl;

  //-----------------------------------------Operator Precedence -------------------------------------------------------------------
  a = 3, e = 4;
  c = (a * 5) + e;
  c = ((((a * 5) + e) - 45) + 87);
  cout << c;

  return 0;
}
