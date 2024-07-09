#include <iostream>
using namespace std;
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Deque(int S)
    {
        size = S;
        arr = new int[size];
        front = rear = -1;
    }
    void push_front(int data)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            cout << "Queue overflow " << endl;
            return;
        }

        if (front == -1) // for empty queue
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        { // to maintain cycle
            front == size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
    }

    void push_back(int data)
    {
         // Overflow condition
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "CQueue overflow" << endl;
            return;
        }
        else if (front == -1)
        {
            // for first element
            rear = front = 0;
        }
        else if (rear = size - 1 && front != 0)
        {
            // If front is in middle of the queue and rear is at the end
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
    }

    void pop_front()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    void pop_back()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear = 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
    }
    bool empty()
    {
        return (front == -1) ? true : false;
    }
    int frontElement()
    {
        return (front == -1) ? -1 : arr[front];
    }
    int backElement()
    {
        return (front == -1) ? -1 : arr[rear - 1];
    }
    int queueSize()
    {
        return (front == rear) ? 0 : (rear - front);
    }
};

int main()
{
    Deque q(10);
    q.push_front(11);

    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;
    q.push_back(15);
    cout << "Front element of q : " << q.frontElement() << endl;
    cout << "Back element of q : " << q.backElement() << endl;

    q.push_back(23);
    q.push_front(30);

    cout << "Size of queue : " << q.queueSize() << endl;

    cout << endl
         << "Front before pop : " << q.frontElement() << endl;
    cout << "Back before pop : " << q.backElement() << endl;
    q.pop_front();
    cout << "Front after pop : " << q.frontElement() << endl;
    cout << "Back after pop : " << q.backElement() << endl
         << endl;

    q.pop_back();
    q.pop_back();

    cout << "Size of queue : " << q.queueSize() << endl;

    q.pop_front();

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