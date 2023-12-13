#include <iostream>
using namespace std;
bool checkPalindrome(string s, int i, int j)
{
    // Base Case
    if (i < j)
    {
        return true;
    }
    if (s[i] != s[j])
    {
        return false;
    }
    else
    {
        // Recursive Call
        return checkPalindrome(s, i + 1, j - 1);
    }
}
int main()
{
    string name = "mom";
    int i = 0;
    int j = name.length() - 1;
    bool ans = checkPalindrome(name, i, j);
    if (ans)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}