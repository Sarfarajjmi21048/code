#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    public:
    Node (){
         this->data=0;
         this->next=nullptr;

    }
    
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
 
};
   void inserthead(Node*&head, int  data){
        Node*newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
    void print (Node *head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
  
int main (){
     Node* head=new Node(10);
     inserthead(head,30);
     inserthead(head,40);
     inserthead(head,50);
     inserthead(head,60);
     inserthead(head,70);
     print(head);

    return 0;


}