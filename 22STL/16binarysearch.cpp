#include <iostream>
#include <algorithm>
using namespace std;

void show(int *a ,int s)
{
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {9,80,7,6,5,4,3,2,1,0};
    int size = sizeof(a) / sizeof(a[0]);

    sort(a,a+size);
    show(a ,size);


    if (binary_search(a,a+size,80))
    {
        cout<<"yes 80 is present"<<endl;
    }
     else
    {
        cout<<"yes 80 is not present"<<endl;
    }
    
    return 0;
}