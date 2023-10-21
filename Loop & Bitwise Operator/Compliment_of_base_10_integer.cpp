/*
Leet code problem number 1009
--------------------------
input => n=5
output => 2
Explanation => 5 is "101" in binary ,with compliment "010" in binary ,which is 2 in base 10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Your number = ";
    cin >> n;
    int num = n;
    int mask = 0;
    if (n == 0 && num == 0)
    {
        cout << "Compliment of given number in decimal is = "<< "1" << endl;
    }
    else
    {

        while (num != 0)
        {
            mask = (mask << 1) | 1;
            num = num >> 1;
        }
        int ans = (~n) & mask;
        cout << "Compliment of given number in decimal is = " << ans << endl;
    }
}