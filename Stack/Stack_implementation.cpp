// #include <bits/stdc++.h> ,or
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Creation of stack
    stack<int> s;

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

    if (s.empty())
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

    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}