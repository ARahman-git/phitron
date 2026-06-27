#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int val;
    cin >> val;
    int flag = 0;

    int l = 0;
    int r = n-1;
    while (r>=l)
    {
        int mid = (l+r)/2;
        if(arr[mid] == val)
        {
            flag = 1;
            break;
        }
        else if(arr[mid] > val)
            r = mid -1;
        else if(arr[mid] < val)
            l = mid+1;
    }
    if(flag)
        cout << "yes";
    else
        cout << "no";
    return 0;
}