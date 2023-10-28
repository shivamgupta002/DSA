#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// In the sort function it is based on intro sort which is mixed up pf 1.quick sort,
// 2.heap sort and
// 3. insertion sort
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);

    //------------ Binary Search ------------
    cout << "finding 4 => " << binary_search(v.begin(), v.end(), 4) << endl;
    // binary_search(start_point,end_point,digit to search)
    cout << endl;
    //------------ Bound ------------
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << endl;

    //------------ Rotate ------------
    cout << "Before Rotate => ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate => ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    //------------ Sort ------------
    vector<int> num;
    num.push_back(3);
    num.push_back(8);
    num.push_back(5);
    num.push_back(4);
    num.push_back(9);
    num.push_back(1);
    cout << "Before Sort = ";
    for (int i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(num.begin(), num.end());
    cout << "After Sort = ";
    for (int i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    //------------ MAX, MIN, Swap ------------

    int a = 5;
    int b = 3;

    cout << "Maximum => " << max(a, b) << endl;
    cout << "Minimum => " << min(a, b) << endl;
    cout << endl;

    cout << "Before Swapping => "
         << "a = " << a << " "
         << " b " << b << endl;
    swap(a, b);
    cout << "After Swapping => "
         << "a = " << a << " "
         << " b " << b << endl;
    cout << endl;

    //------------ Reverse ------------
    string s = "abcd";
    cout << "Before Reverse => " << s << endl;
    reverse(s.begin(), s.end());
    cout << "After Reverse => " << s << endl;
    cout << endl;
}