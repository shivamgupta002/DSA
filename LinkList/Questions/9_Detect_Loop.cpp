#include <iostream>
#include <Math.h>
#include <map>
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

// Insert at tail
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Print list
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    cout << "List is given " << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Cyclic Node or not
bool isCyclic(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
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
    //  tail->next = head->next->next->next;

    if (isCyclic(head))
    {
        cout << "Cycle is present!" << endl;
    }
    else
    {
        cout << "Cycle is not present!" << endl;
    }

    return 0;
}