#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter Name : ";
    cin >> s;
    //   ************   Approach 1 ***********************
    // for(auto &x:s){
    //     x=tolower(x);
    // }
    // cout<<s;

    //   ************   Approach 2 ***********************
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    cout << s;

}