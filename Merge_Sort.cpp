#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r){    //function to merge sorted arrays
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];     //creating 2 temporary arrays
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
           arr[k]=a[i];
           k++;
           i++;
        }else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[],int l,int r){       //function to sort arrays
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);       //calling the function for the 1st half of the array
        mergeSort(arr,mid+1,r);     //calling the function for the 2nd half of the array
        merge(arr,l,mid,r);         //merging the arrays
    }
}
int main()
{
    int arr[]={23,12,34,5,55,45};
    cout<<"The sorted Array is"<<endl;
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

