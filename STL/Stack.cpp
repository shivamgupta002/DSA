#include <iostream>
#include <stack>
using namespace std;

int main() {
    int basic[3] = {1, 2, 3};

    stack<string> s;

    s.push("Shivam");
    s.push("Gupta");


    cout<<"First element : "<<s.top()<<endl;

    s.pop();

    cout<<"First element after pop : "<<s.top()<<endl;

    cout<<"Size of stack : "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;

    return 0;
}
