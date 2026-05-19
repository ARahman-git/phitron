#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", &s);

    int con = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i')
        {
            con++;
        }
        
    }
    printf("%d", con);
    
    return 0;
}