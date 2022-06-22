#include <iostream>

using namespace std;
void printIntersection(int arr1[],int arr2[],int n1,int n2){
    int i=0; 
    int j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}

void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
    cout<<"The intersection of the Arrays is"<<endl;
    printIntersection(arr1,arr2,n1,n2);
    
    cout<<endl;
    
    cout<<"The union of the Arrays is"<<endl;
    printUnion(arr1,arr2,n1,n2);
    return 0;
}