#include <iostream>
using namespace std;
long long squareRoot(long long n)
{
    int ans = -1;
    int start = 0;
    long long end = n;
    long long int mid = start + (end - start) / 2;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number you want to SquareRoot = ";
    cin >> n;
    cout << "SquareRoot of given number is  = " << squareRoot(n);
    ;
}