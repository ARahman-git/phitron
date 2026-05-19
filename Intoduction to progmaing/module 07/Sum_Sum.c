#include <stdio.h>
int main()
{
    int n, Psum = 0, Nsum = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
                Psum = Psum + arr[i];
            else
                Nsum = Nsum + arr[i];            
        }

    printf("%d %d", Psum, Nsum);

    return 0;
}