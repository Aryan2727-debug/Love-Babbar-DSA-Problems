#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int rotate_no=2;
    rotate(arr,arr+rotate_no,arr+n);    //rotating function in array
    for(int i=0;i<n;i++){               //Syntax:-rotate(arr , arr+number_by_which_to_be_rotated , arr+size);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The Pivot element of Rotated Array is = "<<*max_element(arr,arr+n);
    return 0;
}