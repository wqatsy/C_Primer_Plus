
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* praise1.c -- uses an assortment of strings */
#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    printf("Press any key to exit.");
    getch();
    return 0;
}