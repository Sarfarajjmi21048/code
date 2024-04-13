// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node {
    int data;
    node* next;
    public:
    node(){
        this->data=0;
        this->next=nullptr;
    }
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
    void print(){
        node*temp=this;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main() {
   node *first=new node(10);
   node *second=new node(20);
   node *third=new node(30);
   node *fourth=new node(40);
   cout<<" print the linlist"<<endl;
    first->print();
    second->print();
    third->print();
    fourth->print();
    
   
  
    return 0;
}