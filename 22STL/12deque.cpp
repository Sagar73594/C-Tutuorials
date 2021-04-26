#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);
    dq.push_back(8);
    dq.push_back(1);

// dq.pop_back();
// dq.pop_front();
    for (auto itr: dq)
    {
        cout<<itr<<endl;
    }

    cout<<"this is for max size "<<dq.max_size()<<endl;
    cout<<"this is for current size "<<dq.size()<<endl;
    cout<<"this is for at position 0 "<<dq.at(0)<<endl;
    cout<<"this is for at position 1 "<<dq.at(1)<<endl;
    cout<<"this is for at position 2 "<<dq.at(2)<<endl;
    cout<<"this is for at front "<<dq.front()<<endl;
    cout<<"this is for at back "<<dq.back()<<endl;
    
    
    return 0;
}