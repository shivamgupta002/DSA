#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Given Number is prime number" << endl;
    }
    else
    {
        cout << "Not a Prime number" << endl;
    }
}