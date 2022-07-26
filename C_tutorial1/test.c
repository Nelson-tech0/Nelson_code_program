#include <stdio.h>
int main()
{
    /*FILE * profile = fopen("MY_PROFILE.txt", "w");
    fprintf(profile, "My name is Nelson and I am currently in the Alx SE program.\nI would say the program has been quite challenging and would update this list soonest.\nThank you!");
    fclose(profile);*/


    char line[200];
    FILE * profile = fopen("MY_PROFILE.txt", "r");
    fgets(line, 200, profile);
    printf("%s", line);
    return 0;
}