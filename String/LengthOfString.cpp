#include <iostream>
using namespace std;
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
    cout << "Length of string is : " << lengthString(name);
}