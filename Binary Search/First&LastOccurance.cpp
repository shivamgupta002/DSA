#include <iostream>
using namespace std;
int firstOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int a[13] = {0, 1, 2, 3, 4, 4, 4, 4, 4, 5, 6, 6, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int LastIndex = lastOccur(a, size, 4);
    int FirstIndex = firstOccur(a, size, 4);
    int TotalOccur = (LastIndex - FirstIndex) + 1;
    cout << "First occur of the 4 is " << FirstIndex << endl;
    cout << "Last occur of the 4 is " << LastIndex << endl;
    cout << "Total Occur of the 4 is " << TotalOccur;
}