#include <stdio.h>
#include <string.h>
int main()
{
    // int arr[4][4];
    // // inser at index
    // arr[1][2] = 10;
    // printf("%d", arr[1][2]);


    //2d array user input and output

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for(int j= 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for(int j= 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}