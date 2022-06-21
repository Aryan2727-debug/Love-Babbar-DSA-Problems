#include <iostream>
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
void evenNodes(struct Node* head){
    Node* current=head;
    while(current!=NULL){
        if((current->data)%2==0){
            cout<<current->data<<" ";
        }
        current=current->next;
    }
}
void oddNodes(struct Node* head){
	Node* current=head;
	while(current!=NULL){
		if((current->data)%2!=0){
			cout<<current->data<<" ";
		}current=current->next;
	}
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node*));
    struct Node* fifth=(struct Node*)malloc(sizeof(struct Node*));
    head->data=23;
    head->next=second;
    second->data=44;
    second->next=third;
    third->data=15;
    third->next=fourth;
    fourth->data=38;
    fourth->next=fifth;
    fifth->data=43;
    fifth->next=NULL;
    cout<<"The Linked List is"<<endl;
    LinkedListTraversal(head);
    cout<<endl;
    cout<<"The even nodes in the Linked List are "<<endl;
    evenNodes(head);
	cout<<endl;
	cout<<"The odd nodes in the Linked List are "<<endl;
	oddNodes(head);
    return 0;
}