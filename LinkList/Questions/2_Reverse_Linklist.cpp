#include <iostream>
#include <Math.h>
using namespace std;

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
};

// Insert At Tail
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Insert At Head
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Print List
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Reverse using loop
void reverseLL(Node *&head)
{
    Node *prev = NULL;

    while (head != NULL)
    {
        Node *curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;
    }

    head = prev;
}

// Reverse using recursion
void rec_reverseLL(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    rec_reverseLL(head, curr->next, curr);
    curr->next = prev;
}

// Reverse using recursion - Method 2
Node *rec_reverseLL2(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = rec_reverseLL2(head->next);
    head->next->next = head;
    head->next = NULL;
    return curr;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 5; i++)
    {
        insertAtTail(tail, pow(2, i));
    }
    printList(head);

    // cout << "After Reverse " << endl;
    // reverseLL(head);
    // printList(head);

    cout << "Reverse using Recursion" << endl;
    // rec_reverseLL(head, head, NULL);
    // printList(head);

    head = rec_reverseLL2(head);
    printList(head);

    return 0;
}