// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     if (n == 0)
//         return 1;

//     int smallerProblem = power(n - 1);
//     int bigProblem = 2 * smallerProblem;

//     return bigProblem;
// }

// int main()
// {
//     int n;
//     cout << "Enter number you want for power of 2 = ";
//     cin >> n;
//     int ans = power(n);
//     cout << ans << endl;
// }

// // ----------------------- Easy approach ----------------------------------------

// #include <iostream>
// using namespace std;
// int power(int n)
// {
//     if (n == 0)
//         return 1;

//     return 2 * power(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter number you want for power of 2 = ";
//     cin >> n;
//     int ans = power(n);
//     cout << ans << endl;
// }

// // -----------------------power of any digit  Easy approach ----------------------------------------

#include <iostream>
using namespace std;
int power(int base, int pow)
{
    if (pow == 0)
        return 1;

    return base * power(base, pow - 1);
}

int main()
{
    int base, pow;
    cout << "Enter base = ";
    cin >> base;
    cout << "Enter power = ";
    cin >> pow;
    int ans = power(base, pow);
    cout << ans << endl;
}
