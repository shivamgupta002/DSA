#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // create a queue
    queue<int> q;

    // push elements in queue
    q.push(11);
    q.push(15);
    q.push(13);

    cout << "size of queue is : " << q.size() << endl;
    // front value of queue
    cout << "Front of queue is : " << q.front() << endl;

    // pop element from queue
    q.pop();
    q.pop();

    cout << "size of queue is : " << q.size() << endl;
    cout << "Front of queue is : " << q.front() << endl;

    if (q.empty())
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "Queue is not empty " << endl;
    }
    q.pop();

    cout << "size of queue is : " << q.size() << endl;
    // checking for queue is empty or not
    if (q.empty())
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        cout << "Queue is not empty " << endl;
    }

    return 0;
}