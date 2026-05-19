#include <stdio.h>
#include <string.h>
int main()
{
    char a [50], b [50];
    scanf("%s %s", a, b);

    int small = strcmp(a, b);
    if(small < 0)
        printf("%s", a);
    else
        printf("%s", b);
    return 0;
}