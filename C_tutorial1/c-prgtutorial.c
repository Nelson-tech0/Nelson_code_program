/*#include <stdio.h>
int main()
{
    //ADDRESS
    printf("What is the person's name and age\n");
    char characterName[30];
    int characterAge;
    scanf("%s %d", &characterName, &characterAge);
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d\n", characterAge); 
} 

#include <stdio.h>

int main()
{//printing a shape(triangle)
    printf("    / |\n");
    printf("   /  |\n");
    printf("3c/   |5cm\n");
    printf(" /    |\n");
    printf("/_____|\n");
}

#include <stdio.h>
#include <math.h>

int main()
{//USING MATHS FUNCTIONS
    int x, y;
    x = 4;
    y = 3;

    printf("%f\n", pow(x, y)); //pow takes two ints and print the power e.g 4^3 = 64;
    printf("%f\n", sqrt(200)); //sqrt takes one parameter and return the squareroot e.g squarerooot of 36 = 6;
    printf("%f\n", ceil(15.1));// ceil rounds up a decimal number to the next higher whole number.
    printf("%f\n", floor(15.9)); // floor rounds down a decimal num to the next lower whole num.
}

#include <stdio.h>

int main()
{
//DATA TYPES
    /*int age;
    printf("Enter you age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("You grade is %c", grade);

    char name[100];
    printf("Enter your name: ");
    //scanf("%s", &name); //doesn't print lengthy name after it sees a space;
    fgets(name, 20, stdin);
    printf("Your name is %s", name);*/
qwe
//simple calculator
    /*int num1;
    int num2;
    double num;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Answer: %d", num1 + num2);

    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f", num1 + num2);
    return 0;

//Game

    char color[30];
    char plural_noun[30];
    char celebrity[30];  
    char name[20];
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural_noun: ");
    scanf("%s", plural_noun);
    printf("Enter a celebrity: ");
    scanf("%s %s", celebrity, name);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", plural_noun);
    printf("I love %s %s\n", celebrity, name);



    //ARRAYS
    int lucky_numbers[] = {4, 8, 15, 16, 23, 42};
    lucky_numbers[1] = 24;
    printf("%d", lucky_numbers[1]); 
//SECOND FORMAT
    /*int lucky_numbers[10];
    lucky_numbers[1] = 24;
    lucky_numbers[0] = 90;
    printf("%d", lucky_numbers[0]); 
    return 0;
}

#include <stdio.h>

int cube(double num){
        double result = num * num * num;
        return result;
    }

int main()
{
    printf("Answer: %d", cube(2));
    /*sayHi("Nelson", 20);
    return 0;
}
void sayHi(char name[], int age){ //void function doesn't return a value
    printf("Hello %s, you are %d years old\n", name, age); 

}*/


// USING IF ELSE ------
/*#include <stdio.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }else{
        result = num3;
    }
}
int main()
{
    printf("%d\n", max(1, 5, 8));
    if (!(3 > 2 )){
        printf("TRUE");
    }else{
        printf("Totally wrong");
    }
    return 0;
}*/
// CALCULATOR
#include <stdio.h>

int main()
{
    double num1;
    double num2;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    if(op == '+'){
        printf("%f", num1 + num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else if(op == '-'){
        printf("%f", num1 - num2);
    }else{
        printf("Invalid operator");
    }
    return 0;
}

