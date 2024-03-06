#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        int num = s.top();
        cout << num << " ";
        s.pop();
    }
}
void deleteMiddle(stack<int> &s, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    int top = s.top();
    s.pop();
    deleteMiddle(s, count + 1, size);
    s.push(top);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    int count = 0;
    int n = s.size();
    cout << "Size Before deletion : " << s.size() << endl;
    cout << "Number Before deletion : ";
    printStack(s);
    deleteMiddle(s, count, n);
    cout << endl;
    cout << "Size After deletion : " << s.size() << endl;
    cout << "Number After deletion : ";
    printStack(s);
}