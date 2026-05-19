#include <stdio.h>
int main()
{
    int t;
    scanf("%d", t);

    while (t--)
    {
        int m1, m2 , d;
        scanf("%d %d %d", &m1, &m2, &d);
        
        int R_day = (d * m1)/ (m1 + m2);
        int f_day = d - R_day;

        printf("%d\n", f_day);
    }
    
    return 0;
}