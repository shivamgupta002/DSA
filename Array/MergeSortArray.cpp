#include <iostream>
#include <vector>

using namespace std;

void mergeSort(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        arr3[k] = arr1[i];  
        i++;
        k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
void print(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};
    int arr3[8] = {0};
    mergeSort(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
}