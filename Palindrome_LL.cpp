#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void LinkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"NULL";
    }
}

bool isPalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node* prev=NULL;
    Node* next;
    Node* cur=slow;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    
    fast=head;
    while(prev!=NULL){
        if(fast->data!=prev->data){
            return false;
        }
        fast=fast->next;
        prev=prev->next;
    }
    return true;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=10;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    if(isPalindrome(head)){
        cout<<"Linked List is Palindrome"<<endl;
    }else{
        cout<<"Linked List is not Palindrome"<<endl;
    }
    return 0;
}

