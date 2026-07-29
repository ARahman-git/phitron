#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> l = {5, 10, 5, 20, 30, 5, 40, 50};
    //l.remove(5);
    
    l.sort(greater<int>());
    l.unique(); // only work in sorted list;
    l.reverse();
    for(int val : l)
    {
        cout << val << " ";
    } 
    return 0;
}