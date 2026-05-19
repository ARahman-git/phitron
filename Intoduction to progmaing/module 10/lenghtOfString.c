#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0, i = 0;
    char s[101];
    scanf("%s", &s);
    // while (s[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d", count);

    count = strlen(s);
    printf("%d", count);
    
    return 0;
}