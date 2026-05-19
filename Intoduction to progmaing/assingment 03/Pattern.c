#include <stdio.h>
#include <string.h>
int main()
{
    int n, hash = 1;
    scanf("%d", &n);
    int spc = n-1;

    for (int i = 1; i <= n*2 -1; i++)
    {
        for (int j = 0; j < spc; j++)
        {
            printf(" ");
        }
        if (i < n)
        {
            spc--;
        }
        else
            spc++;

        for (int k = 0; k < hash; k++)
        {
            if (i%2 == 0)
            {
                printf("-");
            }
            else
                printf("#");
            
        }
        if (i < n)
        {
            hash +=2;
        }
        else
        {    
            hash -=2;
        }
        printf("\n");
        
        
    }   
    return 0;
}