#include <stdio.h>
int main()
{
    int income;
    float tax = 0;
    printf("Enter your income: ");
    scanf("%d", &income);
    if(income < 2500)
    {
        printf("Your income is less than 2500 dollars There is no tax\n");
    }else if(income < 5000 || income > 5000)
    {
        printf("Your income is between 2500 and 5000 and you are eligible to 5 ");
        tax = tax + 0.05 * (income - 2500);
    }
    
    return 0;
}