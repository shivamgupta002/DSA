// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n == 0)
//         return 1;

//     int smallerProblem = factorial(n - 1);
//     int bigProblem = n * smallerProblem;

//     return bigProblem;
// }
// int main()
// {
//     int n;
//     cout<<"Enter number you want for factorial = ";
//     cin >> n;
//     int ans = factorial(n);
//     cout << ans<<endl;
// }

// ---------------------------Easy Approach -----------------------------------

#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter number you want for factorial = ";
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
}