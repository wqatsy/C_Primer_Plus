#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
/******************************************************************************************
 * 记住，使用printf()函数时，要确保转换说明的数量与待打印值的数量相等。
 ******************************************************************************************/
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n", ten);

    printf("Press any key to exit.");
    getch();

    return 0;
}