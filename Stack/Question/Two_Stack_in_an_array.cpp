// Code Studio problem Medium
#include <iostream>
using namespace std;

class TwoStack
{
public:
    int *arr;
    int limit1, limit2, maxSize;

    TwoStack(int size)
    {
        maxSize = size;
        arr = new int[size];
        limit1 = -1;
        limit2 = size;
    }

    // Insertion of Stack1: Left to Right
    void push1(int data)
    {
        if (limit2 - limit1 > 1)
        {
            limit1++;
            arr[limit1] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Insertion of Stack2: Right to Left
    void push2(int data)
    {
        if (limit2 - limit1 > 1)
        {
            limit2--;
            arr[limit2] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // Pop from Stack1
    void pop1()
    {
        if (limit1 == -1)
        {
            cout << "Stack UnderFlow" << endl;
        }
        else
        {
            limit1--;
        }
    }

    // Pop from stack2
    void pop2()
    {
        if (limit2 == maxSize)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            limit2++;
        }
    }
};

int main()
{
    // Creation of stack
    TwoStack s(5);

    s.push1(10);
    s.push2(20);

    s.push1(11);
    s.push1(12);
    s.push1(13);

    s.pop2();
    s.pop1();
    s.pop1();
}