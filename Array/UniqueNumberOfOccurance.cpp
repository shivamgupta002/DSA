/*
Leet Code Question number 1207
example 1->
    {1,2,2,1,1,3}
    1->3
    2->2
    3->1
    so occurrence will be unique then gives true
example 1->
 {1,2,2,1,1,3,3}
    1->3
    2->2
    3->2
    so there will be no unique occurrence then gives false
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool uniqueOccurrences(int arr[], int size)
{
    vector<int> count;

    // In-built function to sort the array
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        int cd = 0;
        int flag = arr[i];

        while (i < size && arr[i] == flag)
        {
            i++;
            cd++;
        }
        i--;

        count.push_back(cd);
    }

    sort(count.begin(), count.end());

    for (int i = 0; i < count.size() - 1; i++)
    {
        if (count[i] == count[i + 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (uniqueOccurrences(arr, size))
    {
        cout << "Number of occurrences of each value is the array is unique!" << endl;
        // cout<<"False";
    }
    else
    {
        // cout<<"true";
        cout << "Number of occurrences of each value is the array is not unique!" << endl;
    }
}