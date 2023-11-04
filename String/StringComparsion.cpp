/*
Leet code problem 443
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3"

Example2:-
Input- aaabbbbsssssss
Output- a3b4s7

*/

#include <iostream>
#include <string>
using namespace std;

string stringCompression(string s) {
    string ans = "";

    for(int i=0; i<s.length(); i++) {
        int count = 0;
        char temp = s[i];

        while(i<s.length() && s[i]==temp) {
            i++;
            count++;
        }
        i--;

        ans.push_back(temp);
        if(count > 1) {
            char ch = count + '0';
            ans.push_back(ch);
        }
    }

    return ans;
}

int main() {
    string str;

    cout<<"Enter the string : ";
    getline(cin, str);

    string ans = stringCompression(str);

    cout<<"Compressed string : "<<ans;

    return 0; 
}
