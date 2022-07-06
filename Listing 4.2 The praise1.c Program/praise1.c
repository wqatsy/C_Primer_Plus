#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* praise1.c——使用不同类型的字符串 */
#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE); // %s出现了两次，因为程序要打印两个字符串

    printf("Press any key to exit.");
    getch();
    return 0;
}