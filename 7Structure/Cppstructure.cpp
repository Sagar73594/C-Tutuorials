//****************************** [1]C++ STRCUTURE***************************//
#include <iostream>
#include <string>
using namespace std;
struct book
{
private: // NOW this datatype is private and secure it can only be access through the memeber function of the struct dataype.
    char title[20];
    int pages;
    float price;

public:
    void input()
    { // member function of book
        fflush(stdin);
        cout << "Enter the name of the book" << endl;
        // getline(cin, title);
        cin.get(title, 20);

        cout << "Enter the pages of the book" << endl;
        cin >> pages;
        fflush(stdin);
        cout << "Enter the price of the book" << endl;
        cin >> price;
    }
    void display()
    {

        cout << "The name of the book " << title << " its price is " << price << " and total pages are " << pages << endl;
    }
};

int main()
{
    book b1, b2; // b1 and b2 can be called as object of book.

    //************** AS this is reason we use class and object as our data is not protected as we can change the data from the main function thats why we use class.//
    // strcpy(b1.title, "C");
    // b1.pages = 500;
    // b1.price = 560;
    //******************************************************************************************************//
    b1.input();
    b2.input();
    b1.display();
    b2.display();
    return 0;
}
