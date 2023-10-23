#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int size, key;
    int arr[100];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before reverse : ";
    printArray(arr, size);
    cout << endl;
    reverseArray(arr, size);

    cout << "Array after reverse : ";
    printArray(arr, size);
}