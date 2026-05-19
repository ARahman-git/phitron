#include <stdio.h>
int main()
{
    int n = 5;
    int i = 0, j = n-1;
    int arr[] = {10, 20, 30, 40, 50};

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++; j--;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}