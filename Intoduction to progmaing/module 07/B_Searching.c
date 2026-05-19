#include <stdio.h>
int main()
{
    int n, x, tr = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);     
    }

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            tr ++; 
            break;
        }
        
    }
    if(tr == 0)
        printf("%d", -1);
    return 0;
}