#include <iostream>
#include <set>
using namespace std;

// Its implementation is done using BST(Binary search tree)
// In this if we place one item more than one times then it show it only one time
// we can't modify data after declared
// set are slow compared to unordered set
// In unordered set, whenever we fetch data it would be in unsorted form

// Insert ,find ,erase and count have T.C. =>O(log n)
// size ,begin,end and empty are have T.C =>O(log 1)

int main()
{
    set<int> s;
    s.insert(5); // TC->O(n)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    // s.insert(4);
    s.insert(6);

    for (int i : s)
    {
        cout << i << " ";
    }
    // s.erase(s.begin());
    set<int>::iterator it = s.begin();
    it++;
    //------------ Erase ----------
    s.erase(it);

    cout << endl;
    for (int i : s)
    {
        cout << i << " ";
    }

    //---------- Count (it tell whether element present or not) -----------
    cout << endl;
    cout << "5 Present or not :" << s.count(5);
    cout << endl;
    cout << "-5 Present or not :" << s.count(-5) << endl;

    //---------- Find (it gives iterator back) -----------
    set<int>::iterator itr = s.find(5);
    cout << " value present at itr -> :" << *it << endl;

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}