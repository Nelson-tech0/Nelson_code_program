#include <stdio.h>

int main()
{
//DATA TYPES

//a pointer is a type of data that refers to a memory address
    //data types
    //1. int '%d' / "i";
    //2. char - '%c' '%s'; c for single character and s for string characters
    //3. float "%f" for scanf -- %lf
    //4. double -- '%f' for scanf -- %lf
    //5. pointer - '&' this is a pointer with '%p'

    
    int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("You grade is %c\n", grade);

    char name[100];
    char name2[100];
    printf("Enter your name: ");
    scanf("%s %s", &name, &name2); //doesn't print lengthy name after it sees a space;
    //fgets(name, 20, stdin);
    printf("Your name is %s %s", name, name2);
}