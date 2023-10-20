/*'
*** Leet code question 1281 ***
n=234;
product of digit=2*3*4=24;
sum of digit=2+3+4=9;
result=24-9=15;
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of digits = ";
    cin >> n;
    int product = 1;
    int sum = 0;
    int ans = 0;
    while (n > 0)
    {

        int digit = n % 10;
        product *= digit;
        sum += digit;
        n = n / 10;
    }
    ans = product - sum;
    cout << "Subtraction of Product and Sum of digit = " << ans;
}