#include <stdio.h>
#include <string.h>

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int ans = sum(10, 20);
    printf("%d", ans);
    return 0;
}