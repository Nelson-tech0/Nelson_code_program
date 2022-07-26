/*#include <stdio.h>

int main()
{
    int lucky_numbers[] = {4, 8, 10, 12, 13, 14, 16};

    int i;
    for(i = 0; i <= 6; i++)
    {
        printf("%d\n", lucky_numbers[i]);
    }
    return 0;

    //2DIMENSIONAL ARRAYS

    int nums[3] [2] ={
        {1, 2},
        {3, 4},
        {5, 6},
        };
   // printf("%d", nums[1][1]);

   int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", nums[i][j]);
        }
    printf("\n");
    }
    }*/

    #include <stdio.h>

    int nums[4][5] = {
            {1, 2, 3, 4, 5},
            {2, 4, 6, 8, 9},
            {3, 6, 9, 12, 13},
            {4, 8, 12, 16, 17},
        };
        int i, j;

        for(i = 0; i < 4; i++){
            for(j = 0; j < 5; j++){
                printf("%d ", nums[i][j]);
            };
            printf("\n");
        }

    int main()
    {
        printf("Answer: %d", nums[i][j]);
        return 0;
    }
