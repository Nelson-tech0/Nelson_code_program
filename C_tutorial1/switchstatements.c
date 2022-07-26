#include <stdio.h>

int main()
{
    char grade;
    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great!\n");
        break;
    
    case 'B':
        printf("You did good!\n");
        break;

    case 'C':
        printf("You did poorly\n");
        break;
    case 'D':
        printf("You did very bad\n");
        break;
    case 'F':
        printf("You failed\n");
        break;
    default:
        printf("No grade found");
        break;
    }
    return 0;
}