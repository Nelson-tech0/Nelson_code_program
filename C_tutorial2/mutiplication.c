#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //USING WHILE LOOP TO PRINT THE MULTIPLICATION OF 10
    while (i <= 12)
    {
       printf("%d * %d = %d\n", num, i, num * i);
        i++;
    }

    //REVERSE ORDER

    /*while (i >= 1)
    {
        printf("%d * %d = %d\n", num, i, num * i);
        i--;
    }
    return 0;*/


//USING FOR LOOP TO PRINT MULTIPLICATION OF 10
    //for(i; i <= 12; i++){
      //  printf("%d * %d = %d\n", num, i, num * i);
    //}

//REVERSE MULTIPLICATION
   /* for(i; i >= 1; i--){
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;*/

}