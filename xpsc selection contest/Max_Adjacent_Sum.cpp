#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    int maxeven = 0, maxodd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i % 2 == 0)
        {
            if(v[i] > maxodd)
                maxodd = v[i];
            
        }

        else
        {
            if(v[i] > maxeven)
                maxeven = v[i];
        }
    }

    cout << maxodd + maxeven << endl;
    //cout << maxodd << " " << maxeven ;
    return 0;
}