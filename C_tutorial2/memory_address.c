#include <stdio.h>

int main()
{
    int myAge = 43;
    //printf("%p", &myAge);
    printf("%d", *&*&*&*&myAge);
    return 0;
}