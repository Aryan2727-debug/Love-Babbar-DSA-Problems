#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void jobScheduling(int s[],int f[],int n){
    int i=0;
    int j=0;
    cout<<" "<<i;
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            cout<<" "<<j;
            i=j;
        }
    }
}
int main()
{
    int s[]={1,3,0,5,8,5};
    int f[]={2,4,6,7,9,9};
    int n=sizeof(s)/sizeof(s[0]);
    jobScheduling(s,f,n);
    return 0;
}