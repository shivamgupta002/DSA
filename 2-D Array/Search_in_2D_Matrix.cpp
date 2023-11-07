// Using Binary Search
/*
Leet Code problem number:- 74
Example ->
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void input2DArray(int arr[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void printArray(int arr[][MAX], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool binarySearch(int arr[][MAX], int row, int col, int target)
{
    int start = 0;
    int end = (row * col) - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int midElement = arr[mid / col][mid % col];
        if (midElement == target)
        {
            return true;
        }
        else if (midElement < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    int row, col, target;
    int arr[MAX][MAX];

    cout << "Enter the number of row & col : ";
    cin >> row >> col;

    cout << "Enter the elements of array : ";
    input2DArray(arr, row, col);
    cout << endl;

    cout << "Enter the elements to search : ";
    cin >> target;
    cout << endl;

    cout << "Given Array is :" << endl;
    printArray(arr, row, col);
    if (binarySearch(arr, row, col, target))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not Found";
    }
}