#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k ;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans = s;






    
    for (int i = 0; i +k <= n; i++)
    {
        string temp = s;
        sort(temp.begin()+i, temp.begin()+i +k);




        ans =min(ans, temp);
    }

    cout << ans << endl;
    return 0;
}