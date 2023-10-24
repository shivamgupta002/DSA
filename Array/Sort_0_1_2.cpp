#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/*
It will be sort by 3 approach
 DNF (Dutch-National-Flag) Algorithm
 Red - White - Blue Ball Questions
 low - mid - high variables (3 pointers)
*/
void sort012(int arr[], int size)
{
    int l = 0, m = 0, h = size - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else if (arr[m] == 2)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}
int main()
{
    int size;
    int arr[100];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    inputArray(arr, size);

    cout << "Array before sorting : ";
    printArray(arr, size);

    sort012(arr, size);

    cout << "Array after sorting : ";
    printArray(arr, size);
}