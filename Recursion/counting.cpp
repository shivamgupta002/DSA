#include <iostream>
using namespace std;
int print(int n)
{
    if (n == 0)
        return 1;

    print(n - 1);

    cout << n << endl;
}
int main()
{
    int n;
    cout << "Enter number for printing = ";
    cin >> n;
    cout << "Counting start in Ascending order => "<<endl;
    print(n);
}

// ----------------------------------Descending order ---------------------------------------------------

// #include <iostream>
// using namespace std;
// int print(int n)
// {
//     if (n == 0)
//         return 1;

//     cout << n << endl;
//     print(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter number for printing = ";
//     cin >> n;
//     cout << "Counting start in descending order => "<<endl;
//     print(n);
// }