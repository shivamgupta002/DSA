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

// GetLength
int getLength(Node *&tail)
{
    if (tail == NULL)
    {
        return 0;
    }

    int count = 1;
    Node *temp = tail->next;

    while (temp != tail)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

// Print a List
void printList(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    Node *temp = tail;
    cout << "Circular list : ";
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

// Insertion Node
void insertion(Node *&tail, int data, int target)
{
    Node *insertNode = new Node(data);

    if (tail == NULL)
    {
        tail = insertNode;
        insertNode->next = tail;
        return;
    }

    Node *curr = tail;

    while (curr->data != target)
    {
        curr = curr->next;
    }
    insertNode->next = curr->next;
    curr->next = insertNode;
}

// Split Node
pair<Node *, Node *> splitList(Node *tail)
{
    Node *tail1 = tail;
    Node *tail2 = NULL;

    int len = (getLength(tail) + 1) / 2;

    Node *temp = tail;

    while (len > 1)
    {
        temp == temp->next;
        len--;
    }
    tail2 = temp->next;
    temp->next = tail;
    temp = tail2;

    while (temp->next != tail)
    {
        temp = temp->next;
    }

    temp->next = tail2;

    return {tail1, tail2};
}

// Main Function
int main()
{
    Node *tail = NULL;

    insertion(tail, pow(2, 4), 2);
    insertion(tail, pow(2, 3), 16);
    insertion(tail, pow(2, 5), 8);
    insertion(tail, pow(2, 2), 16);
    insertion(tail, pow(2, 0), 8);

    printList(tail);

    pair<Node *, Node *> solution;
    // solution = splitList(tail);

    // printList(solution.first);
    // printList(solution.second);

    return 0;
}