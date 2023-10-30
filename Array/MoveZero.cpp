/*
Leet code question 283
Input: arr = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/

#include <iostream>
using namespace std;
void nonZero(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    int arr[100];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting : ";
    printArray(arr, size);
    cout << endl;
    nonZero(arr, size);

    cout << "Array after Sorting : ";
    printArray(arr, size);
}