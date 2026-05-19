// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     if (num == 0)
//     {
//         printf("Zero");
//     }
//     else
//     {
//         printf("Non Zero");
//     }

// }

// #include <stdio.h>
// int main()
// {

//     int a, b;
//     scanf("%d %d", &a, &b);
//     int sum = a + b;
//     printf("%d", sum);

// }

// #include <stdio.h>
// int main()
// {

//     int a;
//     long long int b;
//     float c;
//     char d;
//     scanf("%d %lld %f", &a, &b, &c);
//     scanf(" %c", &d);
//     printf("%d\n", a);
//     printf("%lld\n",b);
//     printf("%.2f\n",c);
//     printf("%c",d);
    
// }


// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i<n; i++)
//     {
//         printf("I Love Practice\n");
//     }
    
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i<=n; i++)
//     {
//         printf("%d", i);
//         if (i%5 == 0)
//         {
//             printf(" Yes\n");
//         }
//         else
//         {
//             printf(" No\n");

//         }
        

//     }
    
// }

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i = 1; i<= n; i++)
    {
        if(n%3 == 0 && n%7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}