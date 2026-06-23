#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int a = x.size();
        for (int i = 0; i < s.size();)
        {
            if (i + a < s.size() && s.substr(i, a)== x)
            {
                cout << '#';
                i += a;
            }
            else
            {
                cout << s[i];
                i++;
            
            }
        
        
        }
    
    
    }
    return 0;
}