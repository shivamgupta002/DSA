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

// Print list
void printList(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    cout << "List is : ";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// floydDetectLoop
bool floydDetectLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// beginning Point
Node *beginningPoint(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        if (slow == fast)
        {
            break;
        }
    }
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

// Remove Loop
void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *start = beginningPoint(head);
    Node *temp = head;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 7; i++)
    {
        insertAtTail(tail, pow(2, i));
    }
    printList(head);
    tail->next = head->next->next->next;

    if (floydDetectLoop(head))
    {
        cout << "Cycle is present!" << endl;
    }
    else
    {
        cout << "Cycle is not present!" << endl;
    }

    removeLoop(head);

    if (floydDetectLoop(head))
    {
        cout << "Cycle is present!" << endl;
    }
    else
    {
        cout << "Cycle is not present!" << endl;
    }
}