#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int len = strlen(s);

    int arr[26] = {0};

    for (int i = 0; i < len; i++)
    {
        arr[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c - %d\n", i + 97, arr[i]);
        }
        
    }
    return 0;
}