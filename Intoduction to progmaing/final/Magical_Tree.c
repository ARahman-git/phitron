#include <stdio.h>
#include <string.h>
int main()
{
    int n, con, star = 1;
    scanf("%d", &n);
    con = (n/2) +6;

    for (int i = 1; i <= con; i++)
    {
        for (int j = 1; j <= con - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star ; k++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }

    for (int m = 0; m < 5; m++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
    return 0;
}