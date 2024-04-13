#include<iostream> 
using namespace std;
class node {
  public:
  int data;
  node*next;
  node(){
    this->data=0;
    this->next=NULL;
  }
  node(int data){
    this->data=data;
    this->next=NULL;
  }
};

//I want to insert a node right at the head of Linked List
void insertAtHead(node* &head, node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                node* newnode = new node(data);
                head = newnode;
                tail = newnode;
        }
        else {
                //step1:
                node* newnode = new node(data);
                //step2:
                newnode -> next = head;
                //step3:
                head = newnode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(node* &head,node* &tail, int data) {
        if(head == NULL) {
                node* newnode = new node(data);
                head = newnode;
                tail = newnode;
                return;
        }
        //step1: creatae a node
        node* newnode = new node(data);
        //step2: connect woth tail ndoe
        tail->next = newnode;
        //step3: update tail;
        tail = newnode;
}
void print(node* head) {

        node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}
int findLength(node*& head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data,int position,  node*&head, node*&tail){
    if(head==NULL){
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
        return ;
    }
   // step 1: find position prev and curr
    if (position==0){
    insertAtHead(head, tail,  data);
    return ;
   }
    
   int len = findLength(head);
   if (position>=len){
    insertAtTail(head, tail, data);
    return ;
   }
   // step 1 find prev and curr 
   int i=0;
   node *prev =head;
   while (i<position-1)
   {
    prev=prev->next;
    i++;
    }
   node*curr=prev->next;
   //step 2
   node*newnode=new node (data);
   //step 3
   newnode->next=curr;
   //step 4
   prev->next=newnode;
}
int main (){
      node* head = NULL;
        node* tail = NULL;
        insertAtHead(head, tail,20);
        insertAtHead(head, tail,50);
        insertAtHead(head, tail,60);
        insertAtHead(head,tail, 90);
        insertAtTail(head, tail, 77);

        print(head);
        cout << endl;
         cout << "head: " << head -> data << endl;
        cout << "tail: " << tail->data << endl;

        insertAtPosition(200, 2, head, tail);
        cout<< "Printing after insert at position call" << endl;
        print(head);
        cout << endl;
        cout << "head: " << head -> data << endl;
        cout << "tail: " << tail->data << endl;

      
        print(head);
    return 0;
}

