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

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // Push element in queue
    void push(int value)
    {
        Node *temp = new Node(value);
        if (rear == NULL)
        {
            front = rear = temp;
            cout << "Queue is full or overflow!" << endl;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    // Remove element from queue
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty or underflow!" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete temp;
    }

    // Front element of queue
    int frontElement()
    {
        return front == NULL ? -1 : front->data;
    }

    // Last element of queue
    int backElement()
    {
        return rear == NULL ? -1 : rear->data;
    }

    // Size of queue
    int queueSize()
    {
        int size = 0;
        Node *temp = front;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }

    // Check Queue is empty or not
    bool empty()
    {
        return front == NULL ? true : false;
    }
};

int main()
{
    Queue q;
    q.push(11);

    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;
    q.push(15);
    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;

    q.push(23);
    q.push(30);

    cout << "Size of queue : " << q.queueSize() << endl;

    cout << endl
         << "Front before pop : " << q.frontElement() << endl;
    cout << "Back before pop : " << q.backElement() << endl;
    q.pop();
    cout << "Front after pop : " << q.frontElement() << endl;
    cout << "Back after pop : " << q.backElement() << endl
         << endl;

    q.pop();
    q.pop();

    cout << "Size of queue : " << q.queueSize() << endl;

    q.pop();

    if (q.empty())
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }

    return 0;
}
