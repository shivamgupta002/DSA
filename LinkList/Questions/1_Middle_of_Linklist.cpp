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

// Print Node
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Middle of Node
Node *getMiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 4; i++)
    {
        insertAtTail(tail, pow(2, i));
    }
    printList(head);

    Node* mid = getMiddle(head);
    cout << "Middle Node : " << mid->data << endl;

    return 0;
}