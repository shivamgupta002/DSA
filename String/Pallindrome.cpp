#include <iostream>
using namespace std;
bool palindromeString(char str[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int lengthString(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter Your Name : ";
    cin >> name;
    // cout << "Your Name is : " << name << endl;
    int len = lengthString(name);
    // cout << "Length of string is : " << len << endl;
    bool palindrome = palindromeString(name, len);
    if (palindrome)
    {
        cout << "Given name is palindrome";
    }
    else
    {
        cout << "Given name is not palindrome";
    }
}