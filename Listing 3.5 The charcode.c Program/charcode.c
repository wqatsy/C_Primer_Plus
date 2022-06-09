#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* charcode.c——显示字符的代码编号 */
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch); /* 用户输入字符 */
/******************************************************************************************
 * printf()函数用%c指明待打印的字符。
 ******************************************************************************************/
    printf("The code for %c is %d.\n", ch, ch);
 
    printf("Press any key to exit.");
    getch();
    return 0;
}