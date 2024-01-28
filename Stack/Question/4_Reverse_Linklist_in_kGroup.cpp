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

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverseInGroup(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }

    // Step 1 :Reverse k node
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

        count++;
    }

    // Step 2 :Recursive call
    if (next != NULL)
    {
        head->next = reverseInGroup(next, k);
    }

    // Step 3 :Return prev
    return prev;
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

    head = reverseInGroup(head, 2);
    printList(head);

    return 0;
}