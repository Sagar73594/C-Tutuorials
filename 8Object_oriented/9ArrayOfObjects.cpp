#include <iostream> // this is the example of the array in classes and memory allocation in the classes in the classess the data member have there different location memory but the function memery share the same location.
using namespace std;
class shop
{
private:
    int itemid[5];
    int itemprice[5];
    int counter;

public:
    void initcounter(); // this we can also decalre and define the finction as there is single element so we decalre here itself.
    void setprice();
    void getprice();
};
void shop::initcounter()
{
    counter = 0;
}
void shop::setprice()
{
    cout << "Enter the Id of the item" << endl;
    cin >> itemid[counter]; // here the counter works as a indexing.
    cout << "Enter the price of the item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::getprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id is:- "
             << itemid[i] << " The item price is :- " << itemprice[i] << endl;
    }
}
int main()
{
    shop parleg;
    parleg.initcounter();
    for (int i = 0; i < 5; i++)
    {
        parleg.setprice();
    }

    parleg.getprice();

    return 0;
}
