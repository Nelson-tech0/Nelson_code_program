#include <stdio.h>
char username[] ="hilary.nelsonn@yahoo.com";
char password[] = "Nelson";

void main()
{
    printf(" \t\t<<<<<<< FACEBOOK LOG IN >>>>>>>>\n");
    printf("\n\nUsername: ");
    scanf("%s", &username);
    if(username)
    {
        printf("Enter password: ");
        scanf("%s", &password);
        if(password)
        {
            printf(">>>> \t\tLOADING PAGE >>>>");
        }
    }else{
            printf("Incorrect username and Password");
        }
}