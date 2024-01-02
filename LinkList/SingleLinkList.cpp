#include <iostream>
using namespace std;

// Create Node
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // Destructor
    ~Node()
    {
        int value = this->data;
        // Memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " Memory is free for node with data " << value << endl;
    }
};

// Traverse(Print)
void Print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Insert At Head
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert At Tail
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Insert At Position
void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insert at last
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Delete At Position
void DeleteAtPostion(int position, Node *&head)
{
    // Delete at 1st position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // Memory free from start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // Delete any position or last node
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main()
{
    // Creating a New Node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;

    // Head pointed to node1
    Node *head = node1;

    // Tail pointed to node1
    Node *tail = node1;

    Print(head);

    // insert at start
    InsertAtHead(head, 12);
    cout << "Insert at start of node : " << endl;
    Print(head);

    // insert at last
    InsertAtTail(tail, 15);
    cout << "Insert at Last of node : " << endl;
    Print(head);

    // insert at middle
    InsertAtPosition(tail, head, 3, 22);
    cout << "Insert at Middle in node : " << endl;
    Print(head);
    // // Delete at Head
    // DeleteAtPostion(1, head);
    // cout << "Delete head in node : " << endl;
    // Print(head);

    // Delete at position
    DeleteAtPostion(3, head);
    cout << "Delete at position in node : " << endl;
    Print(head);

    return 0;
}