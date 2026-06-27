#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n;
    vector <int> vN(n);
    for (int i =0; i < n; i++)
    {
        cin >> vN[i];
    }
    cin >> m;
    vector <int> vM(m);
    for (int i =0; i < m; i++)
    {
        cin >> vM[i];
    }
    cin >> x;

    vN.insert(vN.begin()+x, vM.begin(), vM.end());

    for (int i =0; i < n+m; i++)
    {
        cout << vN[i] << " ";
    }
    return 0;
}