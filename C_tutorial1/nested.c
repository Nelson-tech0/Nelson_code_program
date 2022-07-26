#include <stdio.h>

int main()
{
    int num[4][3] = {
        {3, 2, 1},
        {4, 2, 1},
        {6, 8, 2},
        {9, 2, 4},
    };

    int i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
    printf("\n");
    }
    return 0;
}