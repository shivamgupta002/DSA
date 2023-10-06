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
double accurateSolution(int n, int digit, double tempSolution)
{
    double factor = 1;
    double ans = tempSolution;
    for (int i = 0; i < digit; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number you want to SquareRoot = ";
    cin >> n;
    int tempSolution = squareRoot(n);
    cout << "SquareRoot of given number is  = " << accurateSolution(n, 3, tempSolution);
}