#include <iostream>
using namespace std;
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;

    cout << "Enter the num : ";
    cin >> num;
    if(isEven(num)){
        cout<<"Given number is even"<<endl;
    }else{
        cout<<"Given number is odd"<<endl;
    }
}