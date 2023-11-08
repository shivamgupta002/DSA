/*
Leet Code problem number 204 (medium)
Example ->
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

/*
Using Sieve of Eratosthenes

remark- >
1.Mark every number as prime number
2.staring se jo jo table me aa raha h usko cut kar do and usko non prime mark kar do
*/
#include <iostream>
#include <vector>
using namespace std;
int countPrime(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = 2 * i; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    int num = countPrime(n);
    cout << "Total Prime number lies is : " << num;
}
