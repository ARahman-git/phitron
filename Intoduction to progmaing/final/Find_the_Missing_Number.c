#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int arr[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%lld", &arr[i]);
        }
                
        long long int mult = arr[1]*arr[2]*arr[3];

        if (arr[0] % mult == 0)
        {
            long long int ans = arr[0]/mult;

            printf("%lld\n", ans);
        }
        else
            printf("%d\n", -1);

    }
    
    return 0;
}