#include <iostream>
using namespace std;
int pow(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
       ans*=a;
    }
    return ans;
}
int main()
{
    int a, b;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    int ans = pow(a, b);
     cout<<"Power of "<<a <<"^"<<b<<" is "<<ans<<endl;
}