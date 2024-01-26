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

class Stack
{
public:
    Node *head;
    int count;
    Stack()
    {
        head = NULL;
        count = 0;
    }

    // Push element in stack
    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        count++;
    }

    // Pop element from stack
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            count--;
        }
    }

    // Check stack empty or Not
    bool isEmpty()
    {
        return (head == NULL) ? true : false;
    }

    // Size of stack
    int size()
    {
        return count;
    }

    // Top of stack
    int top()
    {
        return (head == NULL) ? -1 : head->data;
    }
};

int main()
{

    // Creation of stack
    Stack s;

    // Push Elements
    cout << "Push element in stack :10";
    s.push(10);
    cout << endl
         << "Push element in stack :11";
    s.push(11);

    // Size of stack
    cout << endl
         << "Size of stack: " << s.size() << endl;

    // Top of stack
    cout << "Top element of stack is " << s.top() << endl;

    //  Pop element from stack
    cout << "Pop element from stack " << endl;
    s.pop();

    // current size of stack
    cout << "Current Size of stack : " << s.size() << endl;

    // Check stack is empty or not

    if (s.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Pop elements from stack " << endl;
    s.pop();
    // Again Check stack is empty or not

    if (s.isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

        return 0;
}