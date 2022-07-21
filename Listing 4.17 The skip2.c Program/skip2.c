#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* skiptwo.c——跳过输入中的两个整数 */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    printf("Press any key to exit.");
    getch();
    return 0;
}