#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool pairDifference(int arr[],int n,int diff){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==diff){
                cout<<"The pair is "<<arr[i]<<" "<<arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]={5,20,3,2,5,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int diff=78;
    pairDifference(arr,n,diff);
    return 0;
}