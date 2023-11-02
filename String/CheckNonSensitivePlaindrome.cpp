#include <iostream>
#include <string>
using namespace std;

bool isSymbol(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        while (start < end && isSymbol(s[start]))
        {
            start++;
        }
        while (start < end && isSymbol(s[end]))
        {
            end--;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    if (isPalindrome(str))
    {
        cout << "Palindrome String!\n";
    }
    else
    {
        cout << "Non-palindrome string!\n";
    }

    return 0;
}