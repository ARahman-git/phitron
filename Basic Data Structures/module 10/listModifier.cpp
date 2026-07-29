#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list <int> l2;
    l2 = l;

    l2.push_back(40);
    l2.push_back(50);
    l2.push_back(60);
    l2.push_front(5);

    //l2.pop_back();
    //l2.pop_front();

    //    cout << *next(l2.begin(), 2) << endl;
    //l2.insert(next(l2.begin(), 2), 100);

    //l2.insert(next(l2.begin(), 2), l.begin(),l.end()); // multiple or another list insert;

    //l2.erase(next(l2.begin(),3));
    l2.erase(next(l2.begin(),2), next(l2.begin(),4)); // multiple value erase


    for(int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}