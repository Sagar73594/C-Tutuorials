#include <iostream>
#include <string>
using namespace std;
struct book
{

    string title;
    int pages;
    float price;
};
book input()
{
    book b;
    fflush(stdin);
    cout << "Enter the name of the book" << endl;
    getline(cin, b.title);
    cout << "Enter the pages of the book" << endl;
    cin >> b.pages;
    fflush(stdin);
    cout << "Enter the price of the book" << endl;
    cin >> b.price;
    return b;
}

void display(book b)
{
    cout << "The name of the book " << b.title << " its price is " << b.price << " and total pages are " << b.pages << endl;
}

int main()
{
    book b1, b2;
    b1 = input();
    b2 = input();
    display(b1);
    display(b2);
    return 0;
}