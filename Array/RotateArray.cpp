/*
Leet code problem 189
example 1:-
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void rotateArray(int arr[], int n, int k)
{
    int arr2[50];
    for (int i = 0; i < n; i++)
    {
        arr2[(i + k) % n] = arr[i];
    }

    cout << "Array after Rotate : ";
    printArray(arr2, n);
}
int main()
{
    int size, k;
    int arr[50];
    int arr2[50];

    cout << "Enter the size of array : ";
    cin >> size;
    cout << "Enter number of rotate: ";
    cin >> k;

    cout << "Enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Rotate : ";
    printArray(arr, size);
    cout << endl;

    rotateArray(arr, size, k);
}