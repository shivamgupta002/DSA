// #include <iostream>
#include <bits/stdc++.h>

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
void printList(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = tail;
    cout << "Circular List : " << endl;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);

    cout << endl;
}
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
void deletion(Node *tail, int val)
{
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *previous = tail;
    Node *current = tail->next;
    while (current->data != val)
    {
        previous = current;
        current = current->next;
        if (current->data != val && current == tail)
        {
            cout << "Element not found" << endl;
            return;
        }
    }
    previous->next = current->next;
    current->next = NULL;
    if (current == tail)
    {
        tail = previous;
    }

    delete current;
}

int main()
{
    Node *tail = NULL;
    insertion(tail, pow(2, 4), 2);
    printList(tail);
    insertion(tail, pow(2, 3), 16);
    printList(tail);
    insertion(tail, pow(2, 5), 8);
    printList(tail);
    insertion(tail, pow(2, 2), 16);
    printList(tail);

    deletion(tail, 8);
    printList(tail);

    return 0;
}