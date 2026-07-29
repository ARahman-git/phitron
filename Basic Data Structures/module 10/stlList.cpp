#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 3); // doubly linked list;
    list<int> l2(l); // copy l to l2, O(n);

    //cout << l.size()<<endl;
    //cout << *l.begin()<< endl; // begin() is a itaretor thats why it should be dereference before printing;

    vector<int> v = {10, 20, 30, 40};
    list<int> l3(v.begin(), v.end());
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    l3.clear();
    for(int val : l3)
    {
        cout << val << " ";
    }
    return 0;
}