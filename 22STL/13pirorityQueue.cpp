#include <iostream>
#include <queue>
using namespace std;

void showMaxheap(priority_queue<int> pq)
{

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void showMinheap(priority_queue<int, vector<int>, greater<int>> pq)
{

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    //---------------- MAX HEAP------------------------------
    priority_queue<int> q;

    q.push(7);
    q.push(-3);
    q.push(10);
    q.push(8);

    showMaxheap(q);

    //----------------- MIN HEAP---------------------------------

    priority_queue<int, vector<int>, greater<int>> gquiz;
    gquiz.push(7);
    gquiz.push(-3);
    gquiz.push(10);
    gquiz.push(8);

    showMinheap(gquiz);
}
