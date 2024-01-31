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
// Beginning Point
Node *beginningPoint(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;

    // STEP 1 : Finding Intersection Node
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

    // STEP 2 : Appointing slow to head
    slow = head;

    // STEP 3 : Again Start Traversing Pointers
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    // STEP 4 : Got the Beginning Point
    return slow;
}
// Main Function
int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    for (int i = 1; i <= 7; i++)
    {
        insertAtTail(tail, pow(2, i));
    }
    printList(head);
    tail->next = head->next->next;

    Node* temp = beginningPoint(head);

    cout << "Beginning point of the loop : " << temp->data << endl;

    return 0;
}