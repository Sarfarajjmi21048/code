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
   void inserttail(Node*&tail, int  data){
        Node*newNode=new Node(data);
        tail->next=newNode;
        tail=newNode;
    }
    void print (Node *head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
  
int main (){
     Node* tail=new Node(10);
     inserttail(tail,30);
     inserttail(tail,40);
     inserttail(tail,50);
     inserttail(tail,60);
     inserttail(tail,70);
     print(tail);

    return 0;


}