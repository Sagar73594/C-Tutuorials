#include <iostream>
using namespace std;

/*program for demo#3-base class pointer derived class object

*/
class basicCar
{
public:
    void start()
    {
        cout << "car started" << endl;
    }
};
class advanceCar : public basicCar
{
public:
    void playmusic()
    {
        cout << "playing music" << endl;
    }
};
int main()
{
    basicCar *p;
    advanceCar b;
    p = &b;
    b.start();
    b.playmusic();
    p->start();
    // p->playmusic(); // same problem.

    // WE CANNOT MAKE THE POINTER OF THE DERIVED CLASS AND STORE THE ADDRESS OF BASE CLASS IN IT.
}