#include <iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }
    // Solve 1 case
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive Call
    sortArray(arr, n - 1);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    cout << "\nArray before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    sortArray(arr, 5);
    cout << "\nArray After sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}