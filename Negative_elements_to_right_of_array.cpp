#include <iostream>

using namespace std;

int main()
{
    int arr[]={-4,3,2,-6,1,-8};
    cout<<"The Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int counter=1;
    while(counter<6){
        for(int i=0;i<6-counter;i++){
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }counter++;
    }
    
    cout<<"After shifting negative elements to right side, the Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}