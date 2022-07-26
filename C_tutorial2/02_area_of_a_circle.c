#include <stdio.h>

int main()
{   //AREA OF A CIRCLE AND VOLUME OF A CYLINDER 
    double pie = (double) 3.14;
    int radius;
    int h;
    printf("Enter the radius value1: ");
    scanf("%d", &radius);
    printf("Enter the radius value2: ");
    scanf("%d", &h);
    printf("The area of a circle is %f\n", pie*radius*radius);
    printf("The volume of a cylinder is %f\n", pie*radius*radius*h);
    return 0;
}