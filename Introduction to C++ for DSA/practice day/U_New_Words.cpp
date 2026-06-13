#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e = 0, g =0, y = 0, p = 0, t = 0;
    for( char ch : s)
    {
        if(ch == 'e' || ch == 'E')
            e ++;
        if(ch == 'g' || ch == 'G')
            g ++;
        if(ch == 'y' || ch == 'Y')
            y ++;
        if(ch == 'p' || ch == 'P')
            p ++;
        if(ch == 't' || ch == 'T')
            t ++;
    }
    cout << min({e, g, y, p, t});
    return 0;
}