// Using Binary Search
/*
Leet Code problem number:- 240

This matrix has the following properties:-
-->Integers in each row are sorted in ascending from left to right.
-->Integers in each column are sorted in ascending from top to bottom

Example ->
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
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
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            return true;
        }
        else if (element > target)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
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