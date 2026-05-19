#include <stdio.h>
#include <string.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;
    if (n != m)
    {
        printf("NO");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 1;
                    }
                }
                else if (i+j == n -1) 
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 1;
                    }
                    
                }
                else if (i != j)
                {
                    if(arr[i][j] != 0)
                        flag = 1;
                }
                
                
                
            }
        }
        
        if (flag == 0)
        {
            printf("YES");
        }
        else
            printf("NO");
        

    }

    
    
    
    return 0;
}