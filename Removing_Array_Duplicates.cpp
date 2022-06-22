#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;
void removeDuplicate(int arr[],int n){
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
int main()
{
    int arr[]={1,1,2,3,4,4};
    cout<<"The original Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after removing duplicates is"<<endl;
    removeDuplicate(arr,6);
    return 0;
}
