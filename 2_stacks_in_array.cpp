#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#define n 100
using namespace std;
class Stack{
    int top;
    int *arr;
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
};
int main()
{
    cout<<"The first Stack is"<<endl;
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    cout<<s1.print()<<endl;
    s1.pop();
    cout<<s1.print()<<endl;
    s1.pop();
    cout<<s1.print()<<endl;
    s1.pop();
    cout<<s1.print()<<endl;
    s1.pop();
    s1.pop();
    
    cout<<endl;
    
    cout<<"The second Stack is"<<endl;
    Stack s2;
    s2.push(50);
    s2.push(60);
    s2.push(70);
    s2.push(80);
    cout<<s2.print()<<endl;
    s2.pop();
    cout<<s2.print()<<endl;
    s2.pop();
    cout<<s2.print()<<endl;
    s2.pop();
    cout<<s2.print()<<endl;
    s2.pop();
    s2.pop();
    
    return 0;
}
