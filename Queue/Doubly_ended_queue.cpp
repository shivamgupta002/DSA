#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(10);
    d.push_back(20);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();

    if (d.empty()){
        cout<<"Queue is empty!"<<endl;
    }else{
        cout<<"Queue is not empty!"<<endl;
    }
    
}