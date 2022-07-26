#include <stdio.h>
int main()
{
    // data type 
    //FILE * fpointer = fopen("employees.txt", "w");//r means read the file, w means write a file, a means append a file;

    //fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nNelson, Software engr");

    //fclose(fpointer);

    
    // append a file -- add content to an already existing file/
    /*FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nHilary, accounting");

    fclose(fpointer);*/

    // read a file;
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}