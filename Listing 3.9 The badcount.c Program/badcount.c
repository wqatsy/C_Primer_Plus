#define _CRT_SECURE_NO_WARNINGS

/* badcount.c——参数错误的情况 */
#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

/******************************************************************************************
 * 程序要知道函数的参数个数才能正常工作。第1个字符串中的转换说明与后面的参数一一对应。
 ******************************************************************************************/
    /* 参数太多 */
    printf("%d\n", n, m);
    /* 参数太少 */
    printf("%d %d %d\n", n);
    /* 值的类型不匹配 */
    printf("%d %d\n", f, g); // 用%d显示float类型的值，其值不会被转换成int类型

    printf("Press any key to exit.");
    getch();
    return 0;
}