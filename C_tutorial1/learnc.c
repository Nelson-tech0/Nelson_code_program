#include <stdio.h>
#include <stdlib.h>

int main()
{
int secretnumber = 6;
int guess;
int guesscount = 0;
int outguesses = 0;


while(guess != secretnumber && outguesses == 0)
{
printf("let's play a guessing a game\nNow guess a number\n");
if(guesscount < 3)
{
if (guess != secretnumber)
{
printf("Enter a number:");
scanf("%d", &guess);
}

else
guesscount = 1;
if (guess != secretnumber && guesscount == 0)
{
printf("\nTry again, you have 2 chance left\n");
printf("Enter a number:");
scanf("%d", &guess);
}
else
guesscount = 2;
if (guess != secretnumber && guesscount == 0)
{
printf("\nTry again, your last chance \n");
printf("Enter a number:");
scanf("%d", &guess);
}
else
{
guesscount = 3;
outguesses = 3;
}

}
if (outguesses == 3 && guesscount == 3)
{
printf(" you lose");
}
else
{
printf(" you win");
}
return 0;
}
}