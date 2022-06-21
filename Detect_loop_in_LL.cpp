#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    int flag;
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
bool detectLoop(struct Node* h){
    while(h!=NULL){
    if(h->flag==1){
        return true;
    }
    h->flag=1;
    h=h->next;
    }
    return false;
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
    if(detectLoop(head)){
        cout<<"There is a Loop in the Linked List"<<endl;
    }else{
        cout<<"There is no Loop in the Linked List"<<endl;
    }
    return 0;
}