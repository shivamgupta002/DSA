#include <iostream>
using namespace std;
int HighestPeak(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (a[mid] < a[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int a[14] = {2, 3, 5, 6, 7, 8, 9, 12, 7, 5, 4, 3, 2, 1};
    int size = sizeof(a) / sizeof(a[0]);
    cout << size << endl;
    int index = HighestPeak(a, size);
    cout << "Highest number on index in following array is :   " << index;
}