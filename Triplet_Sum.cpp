#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool tripletSum(int arr[],int n,int sum){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=i+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<"The triplet is "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={-2,0,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=2;
    tripletSum(arr,n,sum);
    return 0;
}