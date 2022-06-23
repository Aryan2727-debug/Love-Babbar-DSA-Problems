#include <iostream>
#include <bits/stdc++.h>
#include <stack>
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
            cout<<"The Stack is full"<<endl;
            return -1;
        }
        return arr[top];
    }
    void bubbleSort(){
        int counter=1;
        while(counter<n){
            for(int i=0;i<n-counter;i++){
                if(arr[i]<arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }counter++;
        }
    }
};
int main()
{
    cout<<"The Stack is"<<endl;
    Stack s;
    s.push(23);
    s.push(10);
    s.push(33);
    s.push(15);
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    cout<<endl;
    s.pop();
    s.pop();
    cout<<endl;
    s.push(23);
    s.push(10);
    s.push(33);
    s.push(15);
    cout<<"The sorted Stack is"<<endl;
    s.bubbleSort();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    cout<<endl;
    s.pop();
    s.pop();
    return 0;
}