#include <bits/stdc++.h>.
using namespace std;

int step(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = step(n - 1) + step(n - 2);
    return ans;
}

int main()
{
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    // cout << "Nth Step : " << step(n) << endl;

    return 0;
}