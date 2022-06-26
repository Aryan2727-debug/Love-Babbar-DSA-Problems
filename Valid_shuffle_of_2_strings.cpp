#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout<<"Enter 1st String"<<endl;
    cin>>str1;
    string str2;
    cout<<"Enter 2nd String"<<endl;
    cin>>str2;
    string str3;
    cout<<"Enter test String"<<endl;
    cin>>str3;
    string str4=str1+str2;
    sort(str4.begin(),str4.end());
    sort(str3.begin(),str3.end());
    if(str3==str4){
        cout<<"The string is a valid shuffle of other 2 strings"<<endl;
    }else{
        cout<<"The string is not a valid shuffle"<<endl;
    }
    return 0;
}