#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);

    int len = strlen(s);
    int x = 1;

    for (int i = 0; i < len/2; i++)
    {
        if (s[i] != s[len - i -1])
        {
            x = 0;
            break;
        }
        
    }
    if (x == 1)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}