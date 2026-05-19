#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX, pos;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i +1;

        }
        
    }
    printf("%d %d", min, pos);
    return 0;
}