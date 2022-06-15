#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* escape.c——使用转义序列 */
#include <stdio.h>

int main(void)
{
    float salary;

/******************************************************************************************
 * 退格(\b)，水平制表符(\t)，回车(\r)，警报(\a)
 ******************************************************************************************/
    /* 1 */ // 发出一声警报
    printf("\aEnter your desired monthly salary:");
    /* 2 */ // 7个退格字符使得光标左移7个位置
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    /* 3 */ // 水平制表符使光标移至该行的下一个制表点，一般是第9列
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    /* 4 */ // 光标回到当前行的起始处
    printf("\rGee!\n");

    printf("Press any key to exit.");
    getch();
    return 0;
}