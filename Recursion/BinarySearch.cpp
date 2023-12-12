#include <iostream>
using namespace std;
// void print(int arr[], int start, int end)
// {
//     for (int i = start; i <= end; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
bool binarySearch(int arr[], int start, int end, int key)
{
    // print(arr, start, end);
    //// base case
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    if (arr[mid] > key)
    {

        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 7, 12};
    int size = 5;
    int key = 4;

    bool ans = binarySearch(arr, 0, 4, key);
    if (ans)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
}