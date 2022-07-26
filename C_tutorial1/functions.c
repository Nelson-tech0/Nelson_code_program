#include <stdio.h>

int cube(double num){
        double result = num * num * num;
        return result;
    }

int main()
{
    printf("Answer: %d", cube(2));
    sayHi("Nelson", 20);
    return 0;
}
void sayHi(char name[], int age){ //void function doesn't return a value
    printf("Hello %s, you are %d years old\n", name, age); 

}