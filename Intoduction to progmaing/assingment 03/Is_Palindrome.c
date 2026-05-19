#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
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
    return x;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int ans = is_palindrome(s);
    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
    
    return 0;
}