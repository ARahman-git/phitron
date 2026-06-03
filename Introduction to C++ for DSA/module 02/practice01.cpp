#include <bits/stdc++.h>
using namespace std;
int *getArray(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int *x = getArray(n);
     for (int i = 0; i < n; i++)
    {
        cout << x[i]<< " ";
    }
    return 0;
}