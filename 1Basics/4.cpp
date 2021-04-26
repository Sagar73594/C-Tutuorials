// #---------------------------------------------------- WhY TO USE  USING NAMESPACE STD --------------------------------------------------------------------------------------

#include <iostream>
// using namespace std; // writing everytime std like below it is not helpful thats why we use namespoace std;

int main()
{
    int a;
    int b;

    std::cout << "Enter the value of a\n"; //[1] here the << this is called insertion operator means to insert whatever is write insert on the screen.
    std::cin >> a;                         //[2] here we dont use the & to tell the compiler to store the number at this address.

    std::cout << "Enter the value of b\n"; //[3]here the >> this is called Exerction operator means to take whatever is keyboard is putting in the memory.
    std::cin >> b;                       
    std::cout << "Sum is ="
              << a + b;
    return 0;
}
