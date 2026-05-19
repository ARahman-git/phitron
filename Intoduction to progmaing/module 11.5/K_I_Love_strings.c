#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {       
        char s[51], t[51];
        scanf("%s %s", s, t);

        int i = 0;
        while(1)
        {
            if (s[i] == '\0' && t[i] == '\0')
            {
                break;
            }
            if (s[i] != '\0')
            {
                printf("%c", s[i]);
            }
            if (t[i] != '\0')
            {
                printf("%c", t[i]);
            }
            i++;
        }
        
        printf("\n");
    }

    return 0;
}