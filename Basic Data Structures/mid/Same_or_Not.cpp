#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    stack <int> st;
    queue <int> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool flag = true;
    if(n != m)
        flag = false;
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}