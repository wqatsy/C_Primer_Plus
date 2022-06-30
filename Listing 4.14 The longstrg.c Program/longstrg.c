#define _CRT_SECURE_NO_WARNINGS

/* longstrg.c ¨C¨C printing long strings */
#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a long string.\n");
    printf("Here's the newest way to print a "        "long string.\n"); /* ANSI C */

    printf("Press any key to exit.");
    getch();
    return 0;
}