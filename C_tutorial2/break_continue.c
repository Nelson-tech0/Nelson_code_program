#include <stdio.h>

int main()
{ //break
    int i;
    
    for (i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    printf("%d\n", i);
    }
   /* int i;

    for (i = 0; i < 10; i++) {
    if (i == 4) {
        continue;  //continue takes only the condition statement out of the loop and process the output of others.
    }
    printf("%d\n", i);
    }*/
    return 0;
}