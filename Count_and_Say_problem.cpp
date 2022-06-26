#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str="3322251";
    cout<<"The string is = "<<str<<endl;
    int count1=0;
    int count2=0;
    int count3=0;
    int count5=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            count1++;
        }
        if(str[i]=='2'){
            count2++;
        }
        if(str[i]=='3'){
            count3++;
        }
        if(str[i]=='5'){
            count5++;
        }
    }
    cout<<endl;
    cout<<"The String has"<<endl;
    cout<<count3<<" Three's , "<<count2<<" Two's , "<<count5<<" Five's , & "<<count1<<" One's."<<endl;
    return 0;
}