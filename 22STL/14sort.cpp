#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void showarray(int *a)
{

    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10] = {9,8,7,6,5,4,3,2,1,10};

    showarray(arr);

    sort(arr,arr+10);
    showarray(arr);

    vector<int> v1;
    v1.push_back(9);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(56);
    v1.push_back(78);
    sort(v1.begin() , v1.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    
    return 0;
}