#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

// input.c——何时使用&
#include <stdio.h>

int main(void)
{
    int age; // 变量
    float assets; // 变量
    char pet[30]; // 字符数组，用于存储字符串

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); // 这里要使用&
    scanf("%s", pet); // 字符数组不使用&
    printf("%d $%.2f %s\n", age, assets, pet);

    printf("Press any key to exit.");
    getch();
    return 0;
}