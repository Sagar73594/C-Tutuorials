#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int xx, int yy)
    {
        x = xx;
        y = yy;
    }

    friend ostream &operator<<(ostream &, Point &);
};
ostream &operator<<(ostream &cout, Point &p)
{
    cout << "(" << p.x << " " << p.y << ")" << endl;
    return cout;
}

int main()
{
    vector<Point> vp1;
    for (int i = 0; i < 5; i++)
    {
        vp1.push_back(Point(i + 1, i + 2));
    }

    for (auto num : vp1)
    {
        cout << num;
    }
    cout << endl;
    cout << "Front element :- " << vp1.front();
    cout << "Back element :- " << vp1.back();

    vector<Point>::reverse_iterator itr1;
    cout << "Reverse vector" << endl;
    for (itr1 = vp1.rbegin(); itr1 != vp1.rend(); itr1++)
    {

        cout << *itr1;
    }
    cout << "Size of vector :- " << vp1.size() << endl;
    vector<Point> v2;

    v2.assign(vp1.begin(), vp1.begin() + 3);
    cout << "Vector 2" << endl;
    for (auto num : v2)
    {
        cout << num;
    }

    return 0;
}
