/*
Leet Code Problem -> 1752
Example 1->
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].

Example 2->
Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
*/

#include <iostream>
using namespace std;
bool sortedAndRotate(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    if (count <= 1)
    {
        return true;
    }
    return false;
}
int main()
{
    int size;
    bool ans;
    int arr[50];

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the element of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    ans = sortedAndRotate(arr, size);
    if (ans)
    {
        cout << "Array is rotated and sorted";
    }
    else
    {
        cout << "Array is not rotated and sorted";
    }
}