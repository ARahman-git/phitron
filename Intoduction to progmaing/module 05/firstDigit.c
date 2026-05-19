#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int result = x/1000;
    
    if(result%2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}