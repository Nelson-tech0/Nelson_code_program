#include <stdio.h>
#include <stdbool.h>

int main()
{
    char name[20];
    char program[20];
    printf("Hello, Welcome to Vscode, we would like to know your name and what type of program you are currently learning?\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your current programming language: ");
    scanf("%s", program);
    printf("We are very pleased to have you on board %s and your %s progamming tutorials will be a huge success at the end of this training.\n", name, program);
    printf("\n");

    char hello[31];
    printf("Hello %s, can you print the word on the console?:\n", name, hello);
    printf("Enter the word: ");
    scanf("%s", hello);
    printf("Dear %s, Congratulations!!! you just wrote your first code %s on C successfully\n", name, hello);    
    return 0;
}