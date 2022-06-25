#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={23,12,56,43,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    
    sort(arr,arr+n);
    
    cout<<"The "<<k<<"th smallest element in the Array is = "<<arr[k-1]<<endl;
    
    reverse(arr,arr+n);
    
    cout<<"The "<<k<<"th largest element in the Array is = "<<arr[k-1]<<endl;
    return 0;
}