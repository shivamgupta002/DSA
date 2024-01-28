#include<iostream>
#include<Math.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printHead(Node* head) {
    if(head == NULL) {
        cout << "List is Empty!" << endl;
        return;
    }

    cout << "Doubly List by Head : ";
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void printTail(Node* tail) {
    if(tail == NULL) {
        cout << "List is Empty!" << endl;
        return;
    }
    
    cout << "Doubly List by Tail : ";
    while(tail != NULL) {
        cout << tail->data << " ";  
        tail = tail->prev;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int data) {
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void reverseDLL(Node* &head, Node* &tail) {
    Node* curr = head;

    while(curr != NULL) {
        Node* temp = curr->prev;
        curr->prev = curr->next;
        curr = curr->next;
        if(curr == NULL) {
            tail->next = temp;
        } else {
            curr->prev->next = temp;
        }
    }

    curr = head;
    head = tail;
    tail = curr;
}

int main() {
    Node *head = new Node(1);
    Node *tail = head;

    for(int i=1; i<=5; i++) {
        insertAtTail(tail, pow(2,i));
    }

    printHead(head);
    printTail(tail);

    reverseDLL(head, tail);

    printHead(head);
    printTail(tail);

    return 0;
}