#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permuteArray(int arr[],int l,int r,int n){
    if(l==r){                                                    //l=start index & r=end index
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        for(int i=l;i<=r;i++){
            
            swap(arr[l],arr[i]);
            
            permuteArray(arr,l+1,r,n);
            cout<<endl;
            
            swap(arr[l],arr[i]);
        }
    }
}
int main()
{
    int arr[]={2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    permuteArray(arr,0,n-1,n);
    return 0;
}