#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
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
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=second;
    if(detectLoop(head)){
        cout<<"Loop found"<<endl;
    }else{
        cout<<"Loop not found"<<endl;
    }
    fifth->next=NULL;
    cout<<"After removing loop, the Linked List is"<<endl;
    LinkedListTraversal(head);
    return 0;
}