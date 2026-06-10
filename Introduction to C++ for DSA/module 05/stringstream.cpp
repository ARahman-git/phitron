#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s); // input with space
    cout << s << endl;
    stringstream ss(s); // ss is a object of   stringstream

    string word;
    // ss >> word; // giving first word form 'ss' to 'word' and remove from himself;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    
    while(ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}