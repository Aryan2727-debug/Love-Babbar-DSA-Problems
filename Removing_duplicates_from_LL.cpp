#include <iostream>
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
void removeDuplicates(struct Node* head){
    Node* current=head;
    Node* next_next;
    while(current->next!=NULL){
        if(current->data==current->next->data){
            next_next=current->next->next;
            free(current->next);
            current->next=next_next;
        }else{
            current=current->next;
        }
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
    third->data=20;
    third->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    removeDuplicates(head);
    cout<<"After removing duplicates, Linked List is"<<endl;
    LinkedListTraversal(head);
    return 0;
}
