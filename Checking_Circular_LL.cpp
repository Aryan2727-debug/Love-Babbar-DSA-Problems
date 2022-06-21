#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void LinkedListTraversal(struct Node* head){
    struct Node* ptr=head;
    do{
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }while(ptr!=head);
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
    third->next=head;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    if(third->next==head){
        cout<<"Linked List is Circular"<<endl;
    }else{
        cout<<"Linked List is not Circular"<<endl;
    }
    return 0;
}