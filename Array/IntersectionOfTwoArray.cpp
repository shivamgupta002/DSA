/*
Intersection of 2 array is an array that consists of all the common elements occurring in both arrays.
1. length of each array is greater than zero
2. Both the array are sorted in non-decreasing order(Ascending Order).
3. Output should be in order of element that occur in the original arrays.
4. If there is no intersection than return a single integer '-1'.

example 1->
n=6
1 2 2 2 3 4
m=4
2 2 3 3
Output -> 2 2 3

example 2->
n=3
1 2 3
m=2
3 4
Output -> 3
*/
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
// -------------------- Approach 1 -------------------------
// void intersectionArray(int arr1[], int arr2[], int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr1[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (element == arr2[j])
//             {
//                 cout << element << " ";
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
// }

//-------------------- Approach 2 -------------------------
void intersectionArray(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";

            // while (arr1[i] == arr2[j]) //It use when we does not want to repeat number
            // {
            // i++;
            // j++;
            // }
            i++;
            j++;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }

        if (arr1[i] > arr2[j])
        {
            j++;
        }
    }
}

int main()
{
    int size1, size2;
    int arr1[100], arr2[100];

    cout << "Enter the size of first array : ";
    cin >> size1;

    cout << "Enter the elements of first array : ";
    inputArray(arr1, size1);

    cout << "Enter the size of second array : ";
    cin >> size2;

    cout << "Enter the elements of second array : ";
    inputArray(arr2, size2);

    cout << "Intersection elements of these two arrays : ";
    intersectionArray(arr1, arr2, size1, size2);
}