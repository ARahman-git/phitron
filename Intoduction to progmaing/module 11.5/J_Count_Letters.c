#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000001];
    scanf("%s", s);

    long long int arr[30] = {0};
    long long len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 30; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c : %lld\n", 'a' + i, arr[i]);
        }
        
    }
    
    
    return 0;
}