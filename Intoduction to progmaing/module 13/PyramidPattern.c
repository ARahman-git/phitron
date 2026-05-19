#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = n - i; s > 0; s--)
        {
            printf("s");
        }
        
        for (int j = 0; j < i*2 + 1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}