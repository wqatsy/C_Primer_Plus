#define _CRT_SECURE_NO_WARNINGS

/* stringf.c¡ª¡ª×Ö·û´®¸ñÊ½ */
#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    printf("Press any key to exit.");
    getch();
    return 0;
}