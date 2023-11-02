#include <iostream>
#include <string>
using namespace std;
char getMaxOccurrence(string str)
{
    int count[26] = {0};
    int maxIndex = 0;

    for (int i = 0; i < str.length(); i++)
    {
        tolower(str[i]);
        int index = str[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
        }
    }

    char answer = maxIndex + 'a';
    return answer;
}

int main()
{
    string str;

    cout << "Enter string : ";
    cin >> str;

    cout << "Most occurred character : " << getMaxOccurrence(str);

    return 0;
}