#include <iostream>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int swapAlternate(int arr[], int size)
{
    for(int i = 0; i < size; i=i+2){
        swap(arr[i], arr[i+1]);
    }
}
int main()
{
    int size;
    int arr[100];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before swapping alternate elements : ";
    printArray(arr, size);
    cout << endl;
    swapAlternate(arr, size);

    cout << "After swapping alternate elements : ";
    printArray(arr, size);

    return 0;
}