#include <stdio.h>

int main()
{   //c * (9.0/5.0)) + 32;
    int c;
    float f = (c * (9.0/5.0)) + 32;
    printf("Enter a value: ");
    scanf("%d", &c);
    printf("The vaule of temperature in fahrenheit is %f", f);
    return 0;

}