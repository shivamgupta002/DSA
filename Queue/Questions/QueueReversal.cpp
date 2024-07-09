/* GFG -Queue Reversal*/
/*
eg=> i/o-> 4,3,1,10,2,6
    o/p->6,2,10,1,3,4
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void Rev_Queue_App1(queue<int> &Q)
{
    stack<int> s;
    while(!Q.empty()){
        int data=Q.front();
        s.push(data);
        Q.pop();
    }
    while (!s.empty())
    {
        int data=s.top();
        Q.push(data);
        s.pop();
    }
}

void print(queue<int> Q)
{
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }

    cout << endl;
}

int main()
{
    queue<int> Q;

    Q.push(4);
    Q.push(3);
    Q.push(1);
    Q.push(10);
    Q.push(2);
    Q.push(6);

    cout << "Before reverse : ";
    print(Q);

    Rev_Queue_App1(Q);

    cout << "Before reverse : ";
    print(Q);
}
