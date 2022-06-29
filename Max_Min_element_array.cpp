#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void MaxMin(int arr[],int n){
    if(n==1){
        cout<<"The Maximum and Minimum element in the Array is"<<endl;
        cout<<arr[0]<<endl;
    }
    if(n==2){
        if(arr[0]>arr[1]){
            cout<<"The Maximum element in the Array is = "<<arr[0]<<endl;
            cout<<"The Minimum element in the Array is = "<<arr[1]<<endl;
        }else{
            cout<<"The Maximum element in the Array is = "<<arr[1]<<endl;
            cout<<"The Minimum element in the Array is = "<<arr[0]<<endl;
        }
    }
    if(n>2){
        cout<<"The Maximum element in the Array is = "<<*max_element(arr,arr+n)<<endl;
        cout<<"The Minimum element in the Array is = "<<*min_element(arr,arr+n)<<endl;
    }
}
int main()
{
    int arr[]={23,12,56,43,77};
    int n=sizeof(arr)/sizeof(arr[0]);
    MaxMin(arr,1);
    return 0;
}