#include <stdio.h>
#include <string.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}
int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}