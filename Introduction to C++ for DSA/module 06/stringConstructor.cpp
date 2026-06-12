#include <bits/stdc++.h>
using namespace std;
int main()
{
    // we write 
    string s = "hello"; 
    //1 way to write by calling constructor
    string s0("hello");
    //cout << s0 <<endl;

    // 2nd way to write

    string s1("hello world", 5); // it resize the string witgh constructor.
    //cout << s1 <<endl;

    //3
    string s2 = "hello world";
    string t(s2,3); // it delete first 3 words and print rest of the
    //cout << t;

    //4
    string s3(5, 'A');
    cout << s3;
    return 0;
}