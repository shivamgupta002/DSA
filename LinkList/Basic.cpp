#include <iostream>
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
int main()
{
    Node head(10);

    Node head2(20);
    head.next = &head2;

    cout << head.data << " & " << head2.data << endl;
    
    // different type to create Node
    Node *head3 = new Node(30);
    cout << head.data << " & " << head2.data << " & " << head3->data << endl;
}