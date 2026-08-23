#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector <int> v(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int z = 0, o = 0, t = 0;
        for (int i = l; i <= r; i++)
        {
            if(v[i] == 0)
                z++;
            else if(v[i] == 1)
                o++;
            else
                t++;

        }
        if(z == 0)
            cout << 0 << endl;
        else if(o == 0)
            cout << 1 << endl;
        else if (t == 0)
            cout << 2 << endl;
        else
            cout << 3 << endl;

    }
    
    
    return 0;
}