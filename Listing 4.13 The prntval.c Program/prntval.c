#define _CRT_SECURE_NO_WARNINGS

/* prntval.c -- finding printf()'s return value */
#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    printf("Press any key to exit.");
    getch();
    return 0;
}