#define _CRT_SECURE_NO_WARNINGS

/* width.c¡ª¡ª×Ö¶Î¿í¶È */
#include <stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    printf("Press any key to exit.");
    getch();
    return 0;
}