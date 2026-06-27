#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    vector <int> v(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i <n; i++)
    {
        if(i+1 < n)
        {

            if(v[i+1] == v[i])
            {
                flag = 1;
                break;
            }
        }
    }
    
    if(flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}