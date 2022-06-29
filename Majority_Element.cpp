#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        if((count(arr,arr+n,arr[i]))>(n/2)){
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,4,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=majorityElement(arr,n);
    cout<<"The Majority Element in the Array is = "<<ans<<endl;
    return 0;
}