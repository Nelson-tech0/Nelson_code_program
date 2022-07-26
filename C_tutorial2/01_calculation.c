#include <stdio.h>

int main()
{
    int num;
    double numb;
    char letter[20];
    char name;
    printf("Identify the following data types by selecting the right variables.\n");
    printf("Enter the first data type: ");
    scanf("%d", &num);
    printf("The first data type %d is an integer\n", num);
    printf("Enter the second data type: ");
    scanf("%lf", &numb);
    printf("The second data type %f is a float\n", numb);
    printf("Enter the third data type: ");
    scanf("%s", letter);
    printf("The third data type %s is a string character\n", letter);
    printf("Enter the fourth data type: ");
    scanf(" %c", name);
    printf("The last data type %c is a character\n", name);
    return 0;
}