#include <iostream>
using namespace std;
// Creating Node
class Node
{
public:
    int data;
    Node *previous;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }
};

// Print By Head (Ascending order)
void printHead(Node *head)
{
    // Ascending order
    if (head == NULL)
    {
        cout << "LinkList is empty" << endl;
        return;
    }
    cout << "Doubly linked list by Head = ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Print By Tail (Descending order)
void printTail(Node *tail)
{
    if (tail == NULL)
    {
        cout << "Tail is empty " << endl;
        return;
    }
    cout << "Doubly LinkList by tail = ";
    while (tail != NULL)
    {
        cout << tail->data << " ";
        tail = tail->previous;
    }
    cout << endl;
}

// Insert At Head
void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->previous = temp;
    head = temp;
}

// Insert At Tail
void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

// Insert At Position
void InsertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    // creating a new node  for d
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->previous = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->previous = temp;
}

// Main Function
int main()
{

    Node *head = new Node(10);
    Node *tail = head;
    printHead(head);
    cout << "Inserting 9 at Head : " << endl;
    InsertAtHead(head, 9);
    printHead(head);
    cout << "Inserting 11 at Tail : " << endl;
    InsertAtTail(tail, 11);
    printHead(head);
    cout << "Inserting 8 at position 4 : " << endl;
    InsertAtPosition(head, tail, 8, 4);
    printHead(head);

    return 0;
}