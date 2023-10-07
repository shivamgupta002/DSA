#include <iostream>
using namespace std;
bool isPossible(int arr[], int size, int student, int solution)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= solution)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > student || arr[i] > solution)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocatedBook(int arr[], int size, int student)
{
    int start = 0;
    int end = 0;
    int ans = -1;

    // finding the sum of elements of array
    for (int i = 0; i < size; i++)
    {
        end += arr[i];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, size, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[100];
    int size, student;
    cout << "Enter Total number of Books: ";
    cin >> size;

    cout << "Enter array of pages: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of students: ";
    cin >> student;

    int minMaxPage = allocatedBook(arr, size, student);

    cout << "Minimum of maximum alloted pages = " << minMaxPage << endl;
}