#include<iostream> 
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = nullptr;
    }

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to insert a node right at the head of the linked list
void insertAtHead(Node* &head, Node* &tail, int data) {
    // Check for Empty LL
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    } else {
        // Step 1:
        Node* newNode = new Node(data);
        // Step 2:
        newNode -> next = head;
        // Step 3:
        head = newNode;
    }
}

// Function to insert a node right at the end of the linked list
void insertAtTail(Node* &head, Node* &tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // Step 1: create a node
    Node* newNode = new Node(data);
    // Step 2: connect with tail node
    tail->next = newNode;
    // Step 3: update tail
    tail = newNode;
}

// Function to print the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 90);
    insertAtTail(head, tail, 77);
    insertAtTail(head, tail, 200);
    insertAtHead(head, tail, 8000);
    insertAtTail(head, tail, 244);

    print(head);
    cout << endl;
    return 0;
}
