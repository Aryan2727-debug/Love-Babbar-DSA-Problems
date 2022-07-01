#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int n1=3;
const int n2=4;
void search_Matrix(int arr[n1][n2],int ele){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr[i][j]==ele)
            cout<<i<<"th row & "<<j<<"th column.";
        }
    }
    return;
}
int main()
{
    int arr[3][4]={ {1,3,5,7} , {10,11,16,20} , {23,30,34,60} };
    int ele=3;
    search_Matrix(arr,ele);
    return 0;
}