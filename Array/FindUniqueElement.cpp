#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter size of an array : ";
    cin >> size;
    if (size % 2 == 0)
    {
        cout << "Your data will be invalid because there may be chance to have no unique number " << endl;
    }
    else
    {
        int arr[100];
        cout << "Enter Element in array : ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "Single unique element present in the array : " << findUnique(arr, size) << endl;
    }
}