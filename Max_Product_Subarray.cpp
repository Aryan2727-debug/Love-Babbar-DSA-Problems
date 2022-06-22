#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxProductSubArray(int arr[],int n){
    int maxProduct=1;
    int currProduct=1;
    for(int i=0;i<n;i++){
        currProduct=currProduct*arr[i];
        if(currProduct>maxProduct){
            maxProduct=currProduct;
        }
        if(currProduct==0){
            currProduct=0;
        }
    }
    return maxProduct;
}
int main()
{
    int arr[]={6, -3, -10, 0, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The maximum product of Subarray is = "<<maxProductSubArray(arr,n);
    return 0;
}