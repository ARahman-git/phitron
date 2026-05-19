#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(int arr[], int n)
{

    for (int i = 0; i < n -1; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            if (arr[i] > arr[j])
            {
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;

            }
            
        }   
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            a[i] = x;
            b[i] = x;
        }

        sort(b, n);

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }        
        printf("\n");
    }
    
    return 0;
}