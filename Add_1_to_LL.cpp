#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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

int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    third->data=third->data+1;
    cout<<"The updated Linked List is"<<endl;
    cout<<head->data<<second->data<<third->data<<endl;
    return 0;
}