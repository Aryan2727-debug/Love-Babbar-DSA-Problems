#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(count(arr,arr+n,arr[i])>1){
            cout<<arr[i]<<" is the repeating element"<<endl;
        }
    }
    return 0;
}