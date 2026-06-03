#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {21,3,543,2,1,45,5,11,8,10};
    sort(a, a+10);
    sort(a, a+10, greater<int>());

    for (int i = 0; i < 10; i++)
    {
        cout<< a[i]<< " ";
    }
    
    return 0;
}