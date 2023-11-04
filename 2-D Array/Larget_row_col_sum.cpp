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

void largeRowSum(int arr[][MAX], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
}

void largeColSum(int arr[][MAX], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
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

    cout << "Largest Row sum is = ";
    largeRowSum(arr, row, col);
    cout << endl;

    cout << "Largest Column sum is = ";
    largeColSum(arr, row, col);
}