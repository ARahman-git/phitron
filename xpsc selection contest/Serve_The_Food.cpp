#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;

    queue <int> a;
    while(q--)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            long long x;
            cin >> x;
            a.push(x);
        }
        else
        {
            if(a.empty())
                cout << -1 << endl;
            else
            {
                cout << a.front() << endl;
                a.pop();
            }
        }
    }
    return 0;
}