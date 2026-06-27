#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> v2(n);
    v2[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        v2[i] = v2[i-1] + v[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << v2[i] << " ";
    }    
    
    return 0;
}