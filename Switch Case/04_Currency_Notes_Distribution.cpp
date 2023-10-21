#include <iostream>
using namespace std;

int main()
{
    int amount;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0;
    int  n5 = 0, n2 = 0, n1 = 0;

    cout << "Enter the amount : ";
    cin >> amount;

    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount %= 100;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount %= 50;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount %= 20;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount %= 10;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount %= 5;
    }
    switch (amount >= 2)
    {
    case 1:
        n2 = amount / 2;
        amount %= 2;
    }
    n1=amount;
    cout << "100 Rupees note = " << n100 << endl;
    cout << "50 Rupees note = " << n50 << endl;
    cout << "20 Rupees note = " << n20 << endl;
    cout << "10 Rupees note = " << n10 << endl;
    cout << "5 Rupees note = " << n5 << endl;
    cout << "2 Rupees note = " << n2 << endl;
    cout << "1 Rupees note = " << n1 << endl;
}