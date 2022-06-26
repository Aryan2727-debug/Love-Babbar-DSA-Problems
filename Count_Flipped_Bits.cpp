#include <iostream>
#include <bits/stdc++.h>
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
int countSetBits(int n){
    int count=0;
    while(n>0){
        count++;
        n&=(n-1);
    }
    return count;
}
int FlippedCount(int a,int b){
    return countSetBits(a^b);
}
int main()
{
    int a=10;
    int b=20;
    cout<<"The Binary form of "<<a<<" is"<<endl;
    decimalToBinary(a);
    cout<<endl;
    cout<<"The Binary form of "<<b<<" is"<<endl;
    decimalToBinary(b);
    cout<<endl;
    cout<<"The number of Bits to be Flipped to convert "<<a<<" to "<<b<<" is = "<<FlippedCount(a,b);
    return 0;
}