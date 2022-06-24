#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n=4;
class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void pop(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        top--;
    }
    void push(int x){
        if(top==n-1){
            cout<<"The Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int print(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    void reverseStack(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        reverse(arr,arr+n);
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"The Stack is"<<endl;
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<endl;
    s.pop();
    
    cout<<endl;
    
    cout<<"The reversed Stack is"<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.reverseStack();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<endl;
    s.pop();
    return 0;
}
