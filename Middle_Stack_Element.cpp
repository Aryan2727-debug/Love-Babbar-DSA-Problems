#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
    int findElement(int i){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[i];
    }
    int findMiddle(){
        int size=sizeof(arr)/sizeof(arr[0]);
        int n=size/2;
        return arr[n];
    }
};
int main()
{
    cout<<"The Stack is"<<endl;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"The middle element of the Stack is = "<<s.findMiddle()<<endl;
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