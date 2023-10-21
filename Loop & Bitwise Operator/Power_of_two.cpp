/*
Leet code problem number 231 (Power of two)
--------------------------
input => n=1
output => true
Explanation =>2^0=1
input => n=16
output => true
Explanation =>2^4=16
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number = ";
    cin >> n;
    bool ans = false;
    /* --------------------------- 1st Approach (Broth force Method ) ---------------------------------- */

    // for (int i = 0; i < 30; i++)
    // {
    //     int power = pow(2, i);
    //     if (power == n)
    //     {
    //         ans = true;
    //     }
    // }
    // if (ans)
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }
    /* --------------------------------------------------------------------------- */
    /* --------------------------- 2nd Approach (Optimal Solution) ---------------------------------- */
    int power = 1;
    for (int i = 0; i < 30; i = i + 2)
    {
        int power = i * power;
        if (power == n)
        {
            ans = true;
        }
    }
    if (ans)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}