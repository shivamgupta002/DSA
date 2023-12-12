#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    bool remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
}
int main()
{
    int arr[5] = {3, 4, 2, 9, 6};
    int size = 5;
    int key = 3;
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }
}