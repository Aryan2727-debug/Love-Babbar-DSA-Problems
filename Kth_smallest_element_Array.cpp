#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the element at "<<i<<" position."<<endl;
        cin>>arr[i];
    }
    
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    sort(arr,arr+n);
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    cout<<"The "<<k<<"th smallest element in the Array is = "<<arr[k-1]<<endl;
    return 0;
}