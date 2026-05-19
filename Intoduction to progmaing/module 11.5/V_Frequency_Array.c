#include <stdio.h>

int main()
{
    int n , m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int freq[100001] = {0};


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }
    
    
    return 0;
}