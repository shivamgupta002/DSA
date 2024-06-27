#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int size, rear, front;

public:
    Queue(int S)
    {
        size = S;
        arr = new int[size];
        front = rear = 0;
    }

    // Push Element in Queue
    void push(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow " << endl;
        }
        else
        {
            arr[rear++] = val;
        }
    }
    // Remove Element from Queue
    void pop()
    {
        if (front == rear)
        {
            cout << "Queue underFlow " << endl;
        }
        else
        {
            front++;
            if (front == rear)
            {
                front = rear = 0;
            }
        }
    }
    // Get Front Element of Queue
    int frontElement()
    {
        return (front == rear) ? -1 : arr[front];
    }

    // Get Last Element of Queue
    int backElement()
    {
        return (front == rear) ? -1 : arr[rear - 1];
    }

    // Get Size of Queue
    int queueSize()
    {
        return (front == rear) ? 0 : (rear - front);
    }
    bool empty()
    {
        return front == rear ? true : false;
    }
};

int main()
{
    Queue q(10);

    cout << "Push 10 " << endl;
    q.push(10);

    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;

    cout << "Push 15" << endl;
    q.push(15);

    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;

    cout << "Push 23" << endl;
    q.push(23);
    cout << "Push 30" << endl;
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
    cout << "Remove one more element from queue" << endl;
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