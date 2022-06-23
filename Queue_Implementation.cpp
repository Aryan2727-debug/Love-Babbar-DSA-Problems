#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define n 5
using namespace std;
class Queue{
  private:
  int arr[n];       //array of size n(5)
  int front;
  int rear;
  public:
  Queue(){
      front=-1;
      rear=-1;
  }
  bool isFull(){        //to check whether the Queue is full or not
      if(front==0 && rear==n-1){
          return true;
      }else{
          return false;
      }
  }
  bool isEmpty(){      //to check whether the Queue is empty or not
      if(front==-1){
          return true;
      }else{
          return false;
      }
  }
  void enQueue(int element){         //inserting an element at the end of the Queue
      if(isFull()){
          cout<<"The Queue is full"<<endl;
      }else{
          if(front==-1){
              front=0;
          }
          rear++;
          arr[rear]=element;
          cout<<endl<<"Inserted "<<element<<endl;
      }
  }
  int deQueue(){                    //deleting an element at the top of the Queue
      int element;
      if(isEmpty()){
          cout<<"The Queue is empty"<<endl;
          return -1;
      }
      else{
          element=arr[front];
      }
      if(front>=rear){
          front=-1;
          rear=-1;
      }else{
          front++;
      }
      cout<<endl<<"Deleted "<<element<<endl;
      return element;
  }
  void display(){
      if(isEmpty()){
          cout<<endl<<"Front Index->"<<front;
          cout<<endl<<"Items->";
          for(int i=front;i<=rear;i++){
              cout<<arr[i]<<" ";
              cout<<endl<<"Rear Index->"<<rear<<endl;
          }
      }
  }
};
int main()
{
    cout<<"The Queue is"<<endl;
    Queue q;
    q.deQueue();
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.enQueue(60);
    q.display();
    q.deQueue();
    q.display();
    return 0;
}
