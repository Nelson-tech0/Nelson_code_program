#include <stdio.h>

int main()
{
   /* int i = 0;
    for(i = 0; i <= 20; i++)
    {
        if(i >= 10){
            printf("%d\n", i);
        }else{
            printf("%d\n", i * 2);
        }
        
    }*/
    int i = 8;
    printf("%d\n", i--);
    printf("%d\n", i);
    printf("%d\n", i++);
    printf("%d\n", i);
    printf("\n");

    printf("%d\n", --i);
    printf("%d\n", i);
    printf("%d\n", ++i);
    printf("%d\n", i);
    return 0;
}