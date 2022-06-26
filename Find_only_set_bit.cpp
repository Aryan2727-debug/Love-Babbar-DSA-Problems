#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void decimalToBinary(int n){
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
}
int findSetBit(int n){
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    int a=sizeof(binary)/sizeof(binary[0]);
    for(int j=i-1;j>=0;j--){
        if(binary[j]==1){
            return j-3;
        }
    }
    return -1;
}
int main()
{
    int x=8;
    cout<<"The Binary form of "<<x<<" is"<<endl;
    decimalToBinary(x);
    cout<<endl;
    cout<<"The only set bit is present at "<<findSetBit(x)<<" position."<<endl;
    return 0;
}