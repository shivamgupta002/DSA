#include <iostream>
using namespace std;
void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int pairSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "New pair : " << arr[i] << " & " << arr[j] << endl;
            }
        }
    }
}
int main()
{
    int size, targetSum;
    int arr[100];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    inputArray(arr, size);

    cout << "Enter the target sum : ";
    cin >> targetSum;

    pairSum(arr, size, targetSum);
}