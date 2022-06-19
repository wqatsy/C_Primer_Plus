#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* pizza.c -- uses defined constants in a pizza context */
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    printf("Press any key to exit.");
    getch();
    return 0;
}