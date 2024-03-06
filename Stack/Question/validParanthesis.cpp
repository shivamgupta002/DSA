#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool matches(char ch, char top)
{
    switch (ch)
    {

    case ')':
        return (top == '(') ? true : false;
    case '}':
        return (top == '{') ? true : false;
    case ']':
        return (top == '[') ? true : false;
    }
}
bool isValid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '[' || ch == '{' || ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() && matches(ch, st.top()))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return (st.empty()) ? true : false;
}

int main()
{
    string str;

    cout << "Enter Expression : ";
    getline(cin, str);

    if (isValid(str))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Not Valid" << endl;
    }
    return 0;
}
