#include <stdio.h>
#include <string.h>

void print_array(int a[], int n, int i)
{
    if (i == 5) //base case
    {
        return;
    }
    printf("%d ", a[i]);
    print_array(a, n, i +1);
    
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    print_array(arr, 5, 0);
    return 0;
}