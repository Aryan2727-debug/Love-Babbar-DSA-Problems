#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void printAnagrams(string str,int l,int r){
    if(l==r){
        cout<<str<<endl;
    }
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        printAnagrams(str,l+1,r);
        swap(str[l],str[i]);
    }
}
int main()
{
    string str="ABC";
    int r=str.length();
    int l=0;
    printAnagrams(str,l,r-1);
    return 0;
}