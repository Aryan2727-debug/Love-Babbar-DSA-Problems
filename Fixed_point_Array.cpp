#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int findFixedPoint(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==i)
        return arr[i];
    }
    return -1;
}
int main()
{
    int arr[]={3,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=findFixedPoint(arr,n);
    cout<<"The fixed point in the Array is = "<<ans<<endl;
    return 0;
}