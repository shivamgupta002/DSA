#include <iostream>
using namespace std;
void reverseString(char str[], int n)
{
    int start = 0;
    int end = n-1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
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
    cout << "Your Name is : " << name << endl;
    int len = lengthString(name);
    cout << "Length of string is : " << len << endl;
    reverseString(name, len);
    cout << "Reverse of string is : " << name;
}