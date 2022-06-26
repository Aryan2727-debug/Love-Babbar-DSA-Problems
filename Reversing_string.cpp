#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    string str="hello";
    cout<<"The string is = "<<str<<endl;
    cout<<"The reversed string is = ";
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}