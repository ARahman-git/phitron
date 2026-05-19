#include <stdio.h>
#include <math.h>
#include <string.h>

void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
}
int main()
{
    int a = round(3.5);
    printf("%d", a);

    //sum();
    return 0;
}