#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
     arr3[k]=arr1[i];
     k++;
     i++;
    }
    while(j<n2){
     arr3[k]=arr2[j];
     k++;
     j++;
    }
}
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    cout<<"The 1st Array is"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"The 2nd Array is"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr2[i]<<" ";
    }
    int arr3[6];
    cout<<endl;
    merge(arr1,arr2,3,3,arr3);
    cout<<"The merged Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}