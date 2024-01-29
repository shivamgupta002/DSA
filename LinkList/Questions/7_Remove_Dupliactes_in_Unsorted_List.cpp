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

// Approach 1 ---->
// T.C.-> O(n^2)
// S.C -> O(1)

void removeNodes1(Node *&head)
{
    // For empty list
    if (head == NULL)
    {
        return;
    }
    // for non Empty List
    Node *curr = head;
    while (curr->next != NULL)
    {
        Node *prev = curr;
        Node *temp = curr->next;
        while (temp != NULL)
        {
            if (curr->data == temp->data)
            {
                Node *target = temp;
                temp = temp->next;
                prev->next = temp;
                delete target;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

// Approach 2 ----> First sort the list then use program (Remove duplicate element in sorted list)
// T.C.-> O(nlogn)
// S.C -> O(1)

// Approach 3 ----> Using Map
// T.C.-> O(n)
// S.C -> O(n)
void removeNodes2(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    map<int, bool> visited;
    Node *temp = head;
    visited[temp->data] = true;
    while (temp->next != NULL)
    {
        if (visited[temp->next->data])
        {
            Node *target = temp->next;
            temp->next = target->next;
            delete target;
        }
        else
        {
            visited[temp->next->data] = true;
            temp = temp->next;
        }
    }
}

// Main Function
int main()
{
    Node *head = new Node(1);
    Node *tail = head;

    insertAtTail(tail, pow(2, 2));
    insertAtTail(tail, pow(2, 1));
    insertAtTail(tail, pow(2, 9));
    insertAtTail(tail, pow(2, 4));
    insertAtTail(tail, pow(2, 7));
    insertAtTail(tail, pow(2, 9));
    insertAtTail(tail, pow(2, 2));
    insertAtTail(tail, pow(2, 4));
    insertAtTail(tail, pow(2, 0));
    insertAtTail(tail, pow(2, 2));
    insertAtTail(tail, pow(2, 9));
    insertAtTail(tail, pow(2, 9));

    printList(head);
    // // Approach 1
    //     removeNodes1(head);
    // // Approach 2
    removeNodes2(head);

    printList(head);

    return 0;
}