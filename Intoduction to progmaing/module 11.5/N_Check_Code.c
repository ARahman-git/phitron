#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    char s[a + b + 2];
    scanf("%s", s);

    bool x = true;

    for (int i = 0; i < a+b+1; i++)
    {
        if (i == a)
        {
            if (s[i] != '-')
            {
                x = false;
                break;
            }
        }
        else
        {
            if (s[i] > '9' || s[i] < '0')
            {
                x = false;
                break;
            }
        }
        
    }
    
    if (x == true)
    {
        printf("Yes");
    }
    else
        printf("No");
    
    return 0;
}