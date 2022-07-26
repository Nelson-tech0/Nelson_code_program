#include <stdio.h>

int main()
{
    char character;
    printf("Enter your character: ");
    scanf("%c", &character);
    if(character >= 97 && character <= 122)
    {
        printf("Yes this is a lowercase character");
    }
    else{
        printf("No, this is not a lowercase character");
    }
   // printf("The value is %d", 'Y');
    return 0;
}