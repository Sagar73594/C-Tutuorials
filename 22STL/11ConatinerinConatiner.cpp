//**** CONATINER IN CONATINER ********//
// this part mostly used in the competitive coding as it is useful to make a tree.
// we can store one conatiner in anothet conatiner
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> Tree;

    int edge, n1, n2;
    cin >> edge;
    Tree.resize(edge);

    for (int i = 0; i < edge; i++)
    {
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for (const auto &e1 : Tree)
    {
        for (const auto &e2 : e1)
        {
            cout << e2;
        }
        cout << endl;
    }

    return 0;
}