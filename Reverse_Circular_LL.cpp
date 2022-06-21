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
void reverse(Node** head_ref)
{
    // if list is empty
    if (*head_ref == NULL)
        return;
 
    // reverse procedure same as reversing a
    // singly linked list
    Node* prev = NULL;
    Node* current = *head_ref;
    Node* next;
    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current != (*head_ref));
 
    // adjusting the links so as to make the
    // last node point to the first node
    (*head_ref)->next = prev;
    *head_ref = prev;
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
    cout<<"The circular Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The reversed Linked List is"<<endl;
    reverse(&head);
    LinkedListTraversal(head);
    return 0;
}