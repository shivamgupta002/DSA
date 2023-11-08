/*
Gcd-> Greatest common factor
gcd(a,b)=gcd(a-b,b)
or, gcd(a,b)=gcd(a%b,b)
*/
//------------- FOR LCM ---------------
/*
lcm(a,b)*gcd(a,b)=a*b
*/

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = a - b;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b = ";
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "GCD of " << a << " & " << b << " is " << ans;
}