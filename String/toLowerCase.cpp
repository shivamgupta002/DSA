#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter Name : ";
    cin >> s;
    
    for(auto &x:s){
        x=tolower(x);
    }
    cout<<s;
    
}