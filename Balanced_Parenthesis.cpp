#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;
bool checkParenthesis(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if(( s.top()=='(' && str[i]==')' ) || ( s.top()=='{' && str[i]=='}' ) || ( s.top()=='[' && str[i]==']' )){
            s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
}
int main()
{
    string str="{()}[]";
    if(checkParenthesis(str)){
        cout<<"The Parenthesis are balanced"<<endl;
    }else{
        cout<<"The Parenthesis are not balanced"<<endl;
    }
    return 0;
}