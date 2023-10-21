/*
Leet code problem number 7 (Reverse Integer)
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Your number = ";
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        if ((ans > INT16_MAX / 10) || (ans < INT16_MIN / 10))
        {
            cout << "Number limit exceeded!" << endl;
            break;
        }
        else
        {
            int digit = n % 10;
            ans = (ans * 10) + digit;
            n = n / 10;
        }
    }
    cout << "Reverse Number is " << ans << endl;
}