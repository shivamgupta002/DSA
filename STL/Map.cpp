#include <iostream>
#include <map>
using namespace std;

// In this data store in key value form
// All key are unique  and only one key represent only one value
// value may be same but not key
// sorted in case of map but unsorted in case of unordered map

// Insert ,find ,erase and count have T.C. =>O(log n)
// size ,begin,end and empty are have T.C =>O(log 1)

int main()
{
    map<int, string> m;
    m[1] = "shivam";
    m[2] = "good";
    m[13] = "boy";

    // second way to insert
    m.insert({5, "gupta"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    //---------- Count (it tell whether element present or not) -----------
    cout << "5 Present or not :" << m.count(5) << endl;
    cout << "3 Present or not :" << m.count(3) << endl;

    //--------- Erase ---------------

    cout << endl;
    cout << "Before Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    m.erase(13);
    cout << endl;
    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    //--------- Find -------------
    cout << endl;
    auto it = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
}