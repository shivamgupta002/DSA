#include <iostream>
using namespace std;
bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return false;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return true;
    }
}
int main()
{
    int arr[5] = {2, 5, 6, 8, 9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}