#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
/******************************************************************************************
 * ��ס��ʹ��printf()����ʱ��Ҫȷ��ת��˵�������������ӡֵ��������ȡ�
 ******************************************************************************************/
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n", ten);

    printf("Press any key to exit.");
    getch();

    return 0;
}