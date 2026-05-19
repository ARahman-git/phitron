#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        int sum = a + b;
        if (sum == c)
        {
            printf("Yes");
        }
        else
            printf("%d", sum);
        
    }
    else if (s == '-')
    {
        int sub = a - b;
        if (sub == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", sub);
        }
        
    }
    else
    {
        int mult = a*b;
        if (mult == c)
        {
            printf("Yes");
        }
        else
            printf("%d", mult);
        
    }
    
    

    
    return 0;
}