#include <stdio.h>

int main()
{
    int num;
    float numb;
    char letter[23];
    printf("Identify the following data types by selecting the right variables.\n");
    printf("Enter the first data type: ");
    scanf("%d", &num);
    printf("The first data type %d is an integer\n", num);
    printf("Enter the second data type: ");
    scanf("%lf", &numb);
    printf("The second data type %f is a float\n", numb);
    printf("Enter the third data type: ");
    scanf("%c", letter);
    printf("The third data type %c is a character\n", letter);
    return 0;
}