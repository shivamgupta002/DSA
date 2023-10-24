/*
Print the pair of array which is said to have a triplet arr[i],arr[j],arr[k] with sum ='k'
Example-> n=5
10 5 5 5 2 and target = 12
output->
5 5 2

Example 2-> n=6
1 2 3 1 2 3 and target = 6
output->
1 2 3
*/

#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void tripletSum(int arr[], int size, int target)
{
    for (int i = 0; i < size - 2; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "New triplet : " << arr[i] << ", " << arr[j] << " & " << arr[k] << endl;
                }
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

    tripletSum(arr, size, targetSum);
}