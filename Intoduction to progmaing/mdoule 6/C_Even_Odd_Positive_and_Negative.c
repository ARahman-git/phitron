#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    for(int i= 0; i< n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (x > 0)
        {
            positive++;
        }
        else if(x<0)
        {
            negative++;
        }
                
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even, odd, positive, negative );
    return 0;
}