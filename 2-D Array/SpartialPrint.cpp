/*
LeetCode Problem Number -> 54
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

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

void spiralMatrix(int matrix[][MAX], int row, int col)
{
    int total = row * col;
    int count = 0;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // Staring Row
        for (int i = startingRow; i <= endingCol && count < total; i++)
        {
            cout << matrix[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // ending Column
        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            cout << matrix[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Ending Row
        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            cout << matrix[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // starting Column
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            cout << matrix[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
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

    cout << "Given Array is :" << endl;
    printArray(arr, row, col);
    cout << endl;
    cout << "After Spatial Array is :" << endl;
    spiralMatrix(arr, row, col);
}