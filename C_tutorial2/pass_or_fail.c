#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("Enter a marks1: ");
    scanf("%d", &marks1);
    printf("Enter a marks2: ");
    scanf("%d", &marks2);
    printf("Enter a marks3: ");
    scanf("%d", &marks3);

    float total = (marks1 + marks2 + marks3)/3;
    if(total >= 40)
    {
        if(marks1 < 33 || marks2 < 33 || marks3 < 33)
        {
            printf("sorry you did not passed because on of your subjects is less than 40%%\n");
        }else{
            printf("Congratulations, you Passed!!\n");
        }
    }else{
        printf("Sorry you are not eligible to move to the next class\n");
    }
    return 0;
}