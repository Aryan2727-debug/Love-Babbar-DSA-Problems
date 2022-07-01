#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1=4;
const int n2=4;
void sortMatrix(int arr[n1][n2]){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n2-n1-1;k++){
                if((arr[i][k]) > (arr[i][k+1])){
                    swap(arr[i][k] , arr[i][k+1]);
                }
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[n1][n2]={ {10,20,30,40} , {15,25,35,45} , {27,29,37,48} , {32,33,39,50} };
    sortMatrix(arr);
    return 0;
}