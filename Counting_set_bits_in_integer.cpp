#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void binaryToDecimal(int n){
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binaryNum[j];
    }
}
int countSetBits(int n){
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    int count=0;
    for(int j=i-1;j>=0;j--){
        if(binaryNum[j]==1){
            count++;
        }
    }
    return count;
    
}
int main()
{
    int x=7;
    cout<<"The binary form of "<<x<<" is"<<endl;
    binaryToDecimal(x);
    cout<<endl;
    cout<<"The number of set bits in "<<x<<" is = "<<countSetBits(x);   
    return 0;
}