#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    cout<<"The String is = "<<str<<endl;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            str.erase(remove(str.begin(),str.end(),str[i]),str.end());
        }
    }
    cout<<"After removing duplicates, the String is = "<<str<<endl;
    return 0;
}