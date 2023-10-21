#include <iostream>
using namespace std;
int factorial(int num)
{
    int ans = 1;
    for (int i = num; i > 1; i--)
    {
        ans = ans * i;
    }
}

// nCr =n!/r!(n-r)!
int nCr(int n, int r)
{
    int ans=0;
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    ans= numerator/denominator;
    return ans;
}

int main()
{
    int n, r;

    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the value of r : ";
    cin >> r;

    int answer = nCr(n, r);
    cout << "Answer = " << answer << endl;
}