#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};
    int key;
    cout << "Enter key you want to search =";
    cin >> key;
    // int index = binarySearch(even, 6, key); // For even
    int index = binarySearch(odd, 6, key); // For odd
    cout << "Index of " << key << " is " << index << endl;
}