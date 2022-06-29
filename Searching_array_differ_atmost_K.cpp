#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int length,int ele){
    for(int i=0;i<length;i++){
        if(arr[i]==ele)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele=6;
    int ans=linear_search(arr,n,ele);
    cout<<"The element is found at "<<ans<<" position."<<endl;
    return 0;
}