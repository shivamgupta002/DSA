#include <iostream>
using namespace std;
int pivotIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[n - 1])
        { // line 1(same line)
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int n;
    int arr[100];
    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pivot = pivotIndex(arr, n);

    cout << "Pivot element = " << arr[pivot] << endl;
}