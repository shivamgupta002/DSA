#include <iostream>
using namespace std;
void reverseString(string &s, int i, int j)
{
    // Base case
    if (i > j)
    {
        return;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    // recursive call
    reverseString(s, i, j);
}

int main()
{
    string name = "Shivam";
    int i=0;
    int j=name.length()-1;
    reverseString(name, i, j);
    cout <<"Reverse of String is "<< name << endl;
    return 0;
}
