#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele=0;
    cout<<"The element is present at "<<linear_search(arr,n,ele)<<" index."<<endl;
    return 0;
}