#include <stdio.h>

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    char name[20];
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(name));
    return 0;
}