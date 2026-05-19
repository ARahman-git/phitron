#include <stdio.h>
int main()
{
    int n, pos, val; 
    scanf("%d", &n);
    
    int arr[n+1];
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &val);
    
    for (int i = n-1; i >= 1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    
    for(int i = 0; i <= n; i++)
    { 
        printf("%d ", arr[i]);
    }

    return 0;
}