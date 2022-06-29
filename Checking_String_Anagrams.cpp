#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    cout<<"Enter the 1st String"<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter the 2nd String"<<endl;
    cin>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"The Strings are anagrams of each other"<<endl;
    }else{
        cout<<"The Strings are not anagrams of each other"<<endl;
    }
    return 0;
}