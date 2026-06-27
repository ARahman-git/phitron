#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector <int> v2(v);
        sort(v2.begin(), v2.end());
        if(v == v2)
            cout << "YES" << endl;
        else
            cout << "NO" <<endl;
        
    }
    return 0;
}