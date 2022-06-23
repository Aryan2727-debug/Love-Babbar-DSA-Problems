#include <iostream>
#include <bits/stdc++.h>
#define n 100
using namespace std;
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
    int printLast(int i){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[i];
    }
};
int main()
{
    
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"The last element of the Stack is"<<endl;
    cout<<s.printLast(0)<<endl;
    cout<<"The Stack is"<<endl;
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