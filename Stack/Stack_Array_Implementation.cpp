#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int limit, maxSize;
    Stack(int maxSize)
    {
        this->maxSize = maxSize;
        arr = new int[maxSize];
        limit = -1;
    }

    // Push Element
    void push(int data)
    {
        if (limit == maxSize - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        limit++;
        arr[limit] = data;
    }

    // Pop Element
    void pop()
    {
        if (limit == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        limit--;
    }

    // Empty or not
    bool isEmpty()
    {
        return (limit < 0) ? true : false;
    }

    // Size of stack
    int size()
    {
        return limit + 1;
    }

    // Top of element
    int top()
    {
        return (limit < 0) ? -1 : arr[limit];
    }
};

int main()
{
    // Creation of stack
    Stack s(10);

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