#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* escape.c����ʹ��ת������ */
#include <stdio.h>

int main(void)
{
    float salary;

/******************************************************************************************
 * �˸�(\b)��ˮƽ�Ʊ��(\t)���س�(\r)������(\a)
 ******************************************************************************************/
    /* 1 */ // ����һ������
    printf("\aEnter your desired monthly salary:");
    /* 2 */ // 7���˸��ַ�ʹ�ù������7��λ��
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    /* 3 */ // ˮƽ�Ʊ��ʹ����������е���һ���Ʊ�㣬һ���ǵ�9��
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    /* 4 */ // ���ص���ǰ�е���ʼ��
    printf("\rGee!\n");

    printf("Press any key to exit.");
    getch();
    return 0;
}