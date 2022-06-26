#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout<<"Enter a String"<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter another String"<<endl;
    cin>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"Strings are Rotations of each other"<<endl;
    }else{
        cout<<"Strings are not Rotations of each other"<<endl;
    }
    return 0;
}