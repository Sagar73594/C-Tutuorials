#include <iostream>
#include <utility>
using namespace std;
// the pair is also standard template class library.
//  no need added any library for the pair stl.
// pair<datatype1,datatype2> object name.
// to make the pair of the datatype 1 with datatype 2 us eufnction make_pair(val1,val2);
// to print out the elements of the array use function cout<<pair.first<<endl; & cout<<pair.second<<endl;
// we can also the comapre the two pair by comapre assignment opertaors.

class student
{
private:
    string name;
    int age;

public:
    void setdata(int a, string n)
    {
        name = n;
        age = a;
    }
    void printdata()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    student s1, s2;
    s1.setdata(20, "durgesh");
    pair<int, student> pair1;
    pair1 = make_pair(1, s1);
    cout << pair1.first << " ";
    // s2 = pair1.second;
    s1.printdata();

    //************************  pair of array elements ****************************//
    // pair<int, int> pair1[3];
    // int first;
    // int second;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> first >> second;
    //     pair1[i] = make_pair(first, second);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << pair1[i].first << " ";
    //     cout << pair1[i].second << endl;
    // }
    //***************************** pair <int,float>*************************************//
    // pair<int, float> pair1;
    // pair<int, float> pair2;
    // pair1 = make_pair(1, 0.5);
    // pair2 = make_pair(2, 5.35);
    // cout << pair1.first << " ";
    // cout << pair1.second << endl;
    // cout << pair2.first << " ";
    // cout << pair2.second << endl;
    //***************************** pair <int,int>*************************************//
    // pair<int, int> pair1;
    // pair<int, int> pair2;
    // pair1 = make_pair(1, 4041999);
    // pair2 = make_pair(2, 15071998);
    // cout << pair1.first << " ";
    // cout << pair1.second << endl;
    // cout << pair2.first << " ";
    // cout << pair2.second << endl;
    // //***************************** pair <int,string>*************************************//
    // pair<int, string> pair1;
    // pair<int, string> pair2;
    // pair1 = make_pair(4, "Durgesh");
    // pair2 = make_pair(15, "Neeraj");
    // cout << pair1.first << " ";
    // cout << pair1.second << endl;
    // cout << pair2.first << " ";
    // cout << pair2.second << endl;
    return 0;
}