#include <stdio.h>
#include <string.h>
int main()
{
    int n, star = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
            
        }
        printf("\n");
        star += 2;
    }
    
    return 0;
}