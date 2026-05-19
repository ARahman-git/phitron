#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    long long arr[n];
    a = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        if(arr[i] != arr[n - i -1])
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    
    
    return 0;
}