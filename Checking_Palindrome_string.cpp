#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
string isPalindrome(string str1){
    string str2=str1;
    reverse(str2.begin(),str2.end());
    if(str1==str2){
        return "Palindrome String";
    }else{
        return "Not Palindrome";
    }
}
int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    cout<<isPalindrome(str);
    return 0;
}