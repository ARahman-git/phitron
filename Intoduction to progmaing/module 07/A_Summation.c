#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    long long sum = 0;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
    printf("%lld", llabs(sum));
    return 0;
}