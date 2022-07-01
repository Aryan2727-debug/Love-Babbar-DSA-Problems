#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1=4;
const int n2=4;
int countOnes(int arr[n1][n2]){
    int rowIndex=-1;
    int maxCount=0;
    for(int i=0;i<n1;i++){
        int count=0;
        for(int j=0;j<n2;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
       if(count>maxCount){
           maxCount=count;
           rowIndex=i;
       } 
    }
    return rowIndex;
}
int main()
{
    int arr[4][4]={ {0,1,1,1} , {0,0,1,1} , {1,1,1,1} , {0,0,0,0} };
    cout<<"The index of the Row with maximum 1's is = "<<countOnes(arr);
    return 0;
}