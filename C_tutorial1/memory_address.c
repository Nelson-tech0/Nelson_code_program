#include <stdio.h>
int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngrade: %p\ngpa: %p", &age, &grade, &gpa);


    return 0;
}