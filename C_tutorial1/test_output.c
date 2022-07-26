#include <stdio.h>

int main()
{
    /*FILE * fpointer = fopen("management.txt", "w");//r means read the file, w means write a file, a means append a file;

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nNelson, Software engr");

    fclose(fpointer);*/

    char line[300];
    FILE * fpointer = fopen("management.txt", "r");
    fgets(line, 300, fpointer);
    printf("%s", line);

    return 0;
}