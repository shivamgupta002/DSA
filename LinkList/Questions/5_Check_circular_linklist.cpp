#include <iostream>
#include <math.h>
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

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
// Print list of nodes
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL)
    {
        if (temp != NULL)
        {
            return false;
        }
        temp = temp->next;
    }
    return true;
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
    // tail->next = head;

    if (isCircular(head))
    {
        cout << "Circular List!" << endl;
    }
    else
    {
        cout << "Not a Circular List!" << endl;
    }

    return 0;
}