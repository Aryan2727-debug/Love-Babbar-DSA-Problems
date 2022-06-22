#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={2,1,1,0,2,1,0,0,2,1};
    sort(arr,arr+10);
    cout<<"The sorted Array is"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}