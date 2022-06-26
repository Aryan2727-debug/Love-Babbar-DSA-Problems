#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define INF 9999
using namespace std;
bool checkPowerOf2(int n){
    for(int i=0;i<INF;i++){
        if(pow(2,i)==n){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(checkPowerOf2(n)){
        cout<<"This number is a Power of 2"<<endl;
    }else{
        cout<<"This number is not a Power of 2"<<endl;
    }
    return 0;
}