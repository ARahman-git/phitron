#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    string s1 = "abdur rahman";
    cout << s.size() << endl;
    cout << s.max_size() << endl; // maximum size that my system can store of a string.
    s.clear(); //it clear string;
    cout << s;
    
    if(s.empty())
        cout<< "empty";
    else 
        cout << "not empty"<< endl;

    // resize 
    
    s1.resize(20, 'x'); // it will print x rest of the char
    cout<< s1 << endl;

    return 0;


}