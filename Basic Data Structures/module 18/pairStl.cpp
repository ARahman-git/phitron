#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    //p = make_pair(2, 3);
    p = {2, 3};
    cout << p.first << endl;
    cout << p.second << endl;

    vector <pair<int, int>> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    return 0;
}