#include <iostream>
#include <math.h>
using namespace std;
// giving error in vs code but giving correct answer in other ide
int main()
{
    cout << "Enter number in decimal =";
    int n;
    cin >> n;
    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 2;
        ans = (digit * pow(10, i)) + ans;
        n = n / 2;
        i++;
    }
    cout << "In Binary =" << ans;
}