/*#include <stdio.h>

int main()
{
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("char: %ld \n", sizeof(char));
    printf("double: %ld \n", sizeof(double));

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b;
    float salary = 56.23;
    char letter = 'Z';
    a = 8;
    b = 34;

    int c = a+b;

    printf("%d \n", c);
    printf("%f \n", salary);
    printf("%c \n", letter);
    return 0;
}

#include <stdio.h>
#define PI 3.14

int main()
{
    printf("%f", PI);
    return 0;
}

#include <stdio.h>

int main(){
    char a[100];
    gets(a);
    printf("You entered: %s", a);
    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("You entered: %d", a);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSum: %d", a+b);

    return 0;
}

#include <stdio.h>

int main()
{
    printf("What is the first letter of your name: ");
    char a = getchar();

    printf("You entered: ");

    putchar(a);

    return 0;
}

#include <stdio.h>

int main()
{
    printf("What is your name?: ");
    char name[100];
    gets(name);

    printf("You entered: ");
    puts(name);

    return 0;
}

#include <stdio.h>

int main()
{
    printf("What is the first letter ?: ");
    char name = getchar();
    printf("The first letter of my name is: ");
    putchar(name);

    return 0;
}

#include <stdio.h>

int main()
{
    int x, y;
    char text[20];
    scanf("%2d %d %*f %5s", &x, &y, text);
    printf("%d %d %s", x, y, text);
    return 0;
}

#include <stdio.h>

int main()
{
    printf("What is your current score?: ");
    int score = 90;
    scanf("%d", &score);
    printf("Your score %d is not up to the standard quota", score);
    return 0;
}

#include <stdio.h>

int main()
{
    int num = 41;

    num += 1;
    if(!(num == 43))
    {
        printf("Incremental works just fine");
    }else{
        printf("You need to check your incremental analysis");
    }
}

#include <stdio.h>

int main()
{
    int y;
    int x = 6;

     if(x >= 5)
     {
        printf("y = 5");
     }else 
     {
        printf("y = %d", x);
     }

    return 0;
}

#include <stdio.h>

int main()
{
    int profit = 1000;
    int client = 30;
    int bonus;

    if(profit > 1000)
    {
        if(client > 25)
        {
            printf("bonus = 100");
        }
    }else 
    {
        printf("bonus = 25");
    }
}

#include <stdio.h>

int main()
{
    int score = 81;

    if(score >= 90)
    {
        printf("%s", "Top 10%\n");
    }else if(score > 80){
        printf("%s", "Top 20%\n");
    }else if(score > 75)
    {
        printf("%s", "You passed.\n");
    }else{
        printf("%s", "You did not pass.\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    char greeting[] = "Hello";
    printf("%s", greeting);

    return 0;
}

#include <stdio.h>

int main()
{
   int myNum = 5;
   float myFloatNum = 5.99;
   char myLetter[] = "Nelson";

   printf("%i\n", myNum * 5);
   printf("%f\n", myFloatNum * myNum);
   printf("%s\n", myLetter );
   return 0;
}

#include <stdio.h>

int main()
{
    int x = 5;
    int y = 6;
    int sum = x * y + 10;
    double average =  (double) (x + y) / 2;
    char myName[] = "ALX is practically a stressful program";

    printf("%d\n%f\n%s\n", sum, average, myName);

    return 0;
}

#include <stdio.h>

int main()
{
    puts("programming is like building a multilingual puzzle\n");
    printf("with proper grammar, but the outcome is a piece of art\n");
    return 0;
}

#include <stdio.h>
#include <unistd.h>

int main()
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

    return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n > 0){
        printf("%d is positive\n", n);
    }else if(n == 0){
        printf("%d is zero\n", n);
    }else {
        printf("%d is negative\n", n);
    }
	return (0);
}

#include <stdio.h>

int main()
{
    char alphabet = 'a';
    int n = 0;

    while(n < 26)
    {
        putchar(alphabet);
        alphabet++;
        n++;
    }
    putchar('\n');
    return 0;
}

#include <stdio.h>

int square(int num);

int main(){
    int x =5;
    int result = square(x);

    printf("%d squared is %d\n", x, result);

    return 0;
}

#include <stdio.h>

int main(){
    printf("What is your average score on alx: ");
    int alx_average;
    scanf("%d", &alx_average);
    if(alx_average > 80)
    {
        printf("You can proceed to the next stage\n");
    }else{
        printf("you have been disqualified from the program\n");
    }
    return 0;
}

#include <stdio.h>
int main(){
    int i = 1;
    int times = 20;

    while(i <= 15){
        printf("%d\n", (times*i));
        i++;
    }
    return 0;
}

/* create a program that takse two doubles as inputs,
 calculates the hypotneus of a right triange 
 and outputs it

#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;

    printf("This app will calculate the hypotenuse of a right triangle. \n");

    printf("Enter the first value: ");
    scanf("%lf", &a);

    printf("Now enter the second value: ");
    scanf("%lf", &b);

    double c = sqrt((a * a) + (b * b));

    printf("The hypotenuse is %f\n", c);

    return 0;
}

#include <stdio.h>

int main()
{
    int x = 5;
    int y =10;

    if(x % 2 == 0 || y % 3 == 0)
    {
        printf("This logic is factual");
    }else if(x > 0 && x != 0 && (x+y > 101))
    {
        printf("Seem logical as well");
    }else{
        printf("None of these are logical");
    }
    return 0;
}


