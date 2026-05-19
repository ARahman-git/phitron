#include <stdio.h>
#include <string.h>
int main()
{
    int t; 
    scanf("%d", &t);
    while (t--)
    {
        int small = 0, capt = 0, digit = 0;
        char s[10001];
        scanf("%s", s);

        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
            {
                small++;
            }
            else if (s[i] >= 65 && s[i] <= 90)
            {
                capt++;
            }
            else
                digit++;
                       
        }
        printf("%d %d %d\n", capt, small, digit);
        
    }
    
    return 0;
}