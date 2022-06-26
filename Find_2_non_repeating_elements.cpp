#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"The sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<endl;
        }else{
            cout<<"Repeating Element";
        }
    }
    return 0;
}