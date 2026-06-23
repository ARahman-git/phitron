#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 0, y = 0; 
    for (int j = 0; j < n; j++)
    {
        if (j < k-1)
        {
            if(arr[j] > arr[k-1])
                x++;
        }
        if(j > k-1)
        {    
            if(arr[j] < arr[k-1])
                y++;
        }
    }
    
    cout << x << " " << y;
    return 0;
}