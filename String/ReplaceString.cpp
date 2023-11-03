/*
COde studio problem
Example 1:-
Input-> Hello World
Output-> Hello@40World
*/

#include <iostream>
#include <string>
using namespace std;

string replaceString(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string str;

    cout << "Enter string : ";
    // cin >> str;

    // ***************** Take input in a line ***************************
    getline(cin, str);

    // cout << "Most occurred character : " << getMaxOccurrence(str);
    cout << "After removing space = " << replaceString(str);

    return 0;
}