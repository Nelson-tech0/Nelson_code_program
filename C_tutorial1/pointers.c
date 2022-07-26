#include <stdio.h>

int main()
{
    //a pointer is a type of data that refers to a memory address
    //data types
    //1. int '%d' / "i";
    //2. char - '%c' '%s'; c for single character and s for string characters
    //3. float "%f" for scanf -- %lf
    //4. double -- '%f' for scanf -- %lf
    //5. pointer - '&' this is a pointer with '%p'

    int age = 30;
    int * pAge = &age; 
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * aGrade = &grade;

//DEFERENCING POINTERS
    //printf("%p", pAge);
    //printf("%d", *pAge);//deferencing pointer -- getting the actual value stored in a pointer age;
    printf("%d", *&*&age); //
    return 0;
}