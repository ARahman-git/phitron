#include <stdio.h>
#include <string.h>
int main()
{
    // char s[1000001];
    // scanf("%s", &s);
    // int lenght = strlen(s);
    // int sum = 0;
    // for (int i = 0; i < lenght; i++)
    // {
    //     sum += s[i] - 48;
    // }
    // printf("%d", sum);

    char str[50] = "hellow\0orld";
    printf("%s", str);

    return 0;
}