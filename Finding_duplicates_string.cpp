#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="abacd";
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            cout<<str[i];
        }
    }
    return 0;
}