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

// Print a List
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty!" << endl;
    }
    cout << "List is " << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Remove Duplicate from sorted list
void removeNodes(Node *&head)
{
    // For empty list
    if (head == NULL)
    {
        return;
    }
    // for non Empty List
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
}

// Main Function
int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 0; i <= 5; i++)
    {
        insertAtTail(tail, pow(2, i));

        if (i == 0)
        {
            insertAtTail(tail, pow(2, i));
        }

        if (i == 5)
        {
            insertAtTail(tail, pow(2, i));
            insertAtTail(tail, pow(2, i));
            insertAtTail(tail, pow(2, i));
        }
    }
    printList(head);

    removeNodes(head);
    printList(head);

    return 0;
}