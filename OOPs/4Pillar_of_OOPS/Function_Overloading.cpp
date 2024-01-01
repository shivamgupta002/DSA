#include <iostream>
using namespace std;
class A
{
public:
    void sum()
    {
        cout << "No Number found" << endl;
    }
    void sum(int n)
    {
        cout << "Sum of " << n << " is " << n << endl;
    }
    void sum(int m, int n)
    {
        cout << "Sum of " << m << " & " << n << " is " << m + n << endl;
    }
};

int main()
{
    A obj;
    obj.sum();
    obj.sum(1);
    obj.sum(1, 2);

    return 0;
}
