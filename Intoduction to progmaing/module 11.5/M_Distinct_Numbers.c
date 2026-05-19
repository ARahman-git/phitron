#include <stdio.h>
#include <stdbool.h>
int Distinct_Numbers()
{
    int n, result = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        bool is_unique = true;
        for(int j = i +1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique == true)
        {
            result++;
        }
        
    }
    return result;
}
int main()
{
    
    printf("%d", Distinct_Numbers());
    
    return 0;
}