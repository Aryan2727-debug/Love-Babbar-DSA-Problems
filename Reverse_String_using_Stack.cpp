#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#define n 100
using namespace std;
class Stack{
    char *arr;
    int top;
    public:
    Stack(){
        arr=new char[n];
        top=-1;
    }
    void pop(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        top--;
    }
    void push(char x){
        if(top==n-1){
            cout<<"The Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    char print(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return '0';
        }
        return arr[top];
    }
};
int main()
{
    Stack s;
    s.push('a');
    s.push('r');
    s.push('y');
    s.push('a');
    s.push('n');
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    s.pop();
    return 0;
}