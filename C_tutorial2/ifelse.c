#include <stdio.h>

int main()
{
    int score;
    printf("Enter a score: ");
    scanf("%d", &score);
    if(score >= 90 || score >= 100 )
    {
        printf("grade is A");
    }else if(score >= 80 || score >= 90)
    {
        printf("Grade is B");
    }else if(score >= 70 || score >= 80)
    {
        printf("Grade is C\n");
    }else if(score >= 60 || score >= 70)
    {
        printf("Grade is D\n");
    }else
    {
        printf("Grade is F\n");
    }
    return 0;
}