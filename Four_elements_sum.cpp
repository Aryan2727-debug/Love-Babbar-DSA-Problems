#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool findFourElements(int arr[],int n,int sum){
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            for(int k=j+1;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==sum){
                        cout<<"The Four elements are = "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l];
                        return true;
                    }
                }
            }
        }
    }
    return false;
}    
int main()
{
    int arr[]={0,0,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=3;
    findFourElements(arr,n,3);
    return 0;
}