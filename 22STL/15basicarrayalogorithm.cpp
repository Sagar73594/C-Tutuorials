#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    
    int arr[6]  = { 1,5,77,3,-6,8};

    all_of(arr ,arr+6 ,[](int x){return x > 0;} ) ? cout<<"All are positive"<<endl : cout<<"All are not positive"<<endl;
    any_of(arr ,arr+6 ,[](int x){return x < 0;} ) ? cout<<"one value is neagtive"<<endl : cout<<"no one is not neagtive"<<endl;
    none_of(arr ,arr+6 ,[](int x){return x == 6 ;} ) ? cout<<"8 is n0t there"<<endl : cout<<"yes one value is 8"<<endl;

    int arr2[6];
    copy_n(arr,6,arr2);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr2[i] <<" ";
    }
    int arr3[6];
cout<<endl;
    iota(arr3,arr3+6,20);
     for (int i = 0; i < 6; i++)
    {
        cout<<arr3[i] <<" ";
    }

    return 0;
}