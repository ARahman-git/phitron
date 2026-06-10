#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "a";
    string b = "B";
    a += b;
    //cout << a;
    
    a.append(b);
    //cout << a; // same as concatanation
    
    a.push_back('a');
    //cout << a; // isert at back only can push charecter not string
    a.pop_back(); //remove last element

    a = "abdur"; // can update after initialize 
    a.assign("AR rahman"); // same as a = "abdur"
    //cout << a;
    
    //a.erase(2); // it will erase all after index 2 ;
    //cout << a;
    a.erase(2, 3); //this will delete 3 charecter after index 2;
    cout << a << endl;

    string s = "hello world";
    s.replace(6, 5, "bangladesh"); //(form which index to replace, how many carecter to be delete, what write replace of)

    cout<< s;

    //s.insert(index , what should inser on that index);
    
    return 0;
}