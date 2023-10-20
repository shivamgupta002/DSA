/*
*** Leet code Question 191 ***

Input= 11 (00000000000000000000000000001011) (32 bits)
output=3
explanation=The input binary string 00000000000000000000000000001011 has a total of three '1' bits

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "The input number = ";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Total number of 1 present in given number is = " << count;
}