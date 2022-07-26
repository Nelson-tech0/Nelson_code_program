/*#include <stdio.h>

int main()
{
    printf("Input Highest range: ");
    int max;
    scanf("%d", &max);
    int i;
    for(i = 0; i <= max; i++)
    {
        printf("%d\n", i);
    }
    printf("You printed up %d number\n", i);

    return 0;
}


#include <stdio.h>

int main()
{
    printf("Input Highest range: ");
    int max;
    scanf("%d", &max);
    int i;
    for(i = 0; max > 0; max--)
    {
        printf("%d\n", max);
    }
    return 0;
} 

#include <stdio.h>

int main()
{
    for(int i = 0; i < 11; i++)
    {
        //printf("%d\n", i);
        for(int k = i; k >= 0; k--)
        {
            printf("%d ", k);
        }
    printf("\n");
    }
    return 0;
}*

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int input = 31;
    int isPrime = true;

    for(int i = input - 1; i > 1; i--)
    {
        printf("%d ", i);
        if(input % i == 0)
        {
            isPrime = false;
        }
    }
    if(isPrime)
    {
        printf("\nis Prime\n");
    }else{
        printf("\nNot Prime!\n");
    }
}*/

#include <stdio.h>

int main()
{
    for(int i = 0; i < 11; i++){
        for(int k = i; k >= 0; k--)
        {
            printf("%d ", k);
        }
    printf("\n");
    }
}